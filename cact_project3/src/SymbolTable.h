#pragma once

#include <vector>
#include <map>
#include <unordered_map>
#include <memory>

#include "cact_types.h"

typedef struct scope{
    struct scope *parent;
}scope_t;


typedef struct name_scope{
    std::string name;
    scope_t *scope_ptr;

    //重载运算符==以进行比较
    bool operator==(const name_scope &other) const{
        return (other.scope_ptr == scope_ptr) && (other.name == name);
    }
} name_scope_t;

//对于非基本类型，需要重写hash方法
struct hash_utils{
    size_t operator()(const name_scope_t &tmp) const {
        return (std::hash<std::string>()(tmp.name) ^ std::hash<scope_t *>()(tmp.scope_ptr));
    }
};

//变量表表项
typedef struct var_symbol_item{
    cact_type_t type;
    #ifdef IR_GEN
    std::string IR_name;
    #endif
} var_symbol_item_t;

//形参列表项
typedef struct fparam_item{
    std::string name;
    cact_type_t type;
    #ifdef IR_GEN
    std::string IR_name;
    #endif
} fparam_item_t;

typedef std::vector<fparam_item_t>
        fparam_list_t;

//函数表表项
typedef struct func_symbol_item{
    //返回值
    cact_basety_t ret_type;
    //形参列表
    fparam_list_t fparam_list;
}func_symbol_item_t;

typedef std::unordered_map <name_scope_t, var_symbol_item_t, hash_utils> 
        var_table_t;
typedef std::unordered_map <std::string, func_symbol_item_t> 
        func_table_t;

class SymbolTable{
    public:
        scope_t *root_scope;

        //unordermap需要传入key，value和hash_func
        var_table_t var_table;
        func_table_t func_table;

        //find只能查找特定作用域的var，用于声明检查
        //deepfind将向上搜索，用于变量使用
        var_table_t::iterator deepfind(std::string name, scope_t *scope_ptr){
            auto end_flag = var_table.end();
            while (scope_ptr != NULL){
                //返回指向找到元素的迭代器
                auto iter = var_table.find((name_scope){.name=name, .scope_ptr=scope_ptr});
                if (iter != end_flag){
                    //找到该变量
                    return iter;
                }
                else 
                    scope_ptr = scope_ptr->parent;
            }
            //如果最终未找到，返回end_flag用于判断
            return end_flag;
        }   
};

//全局变量定义在main
extern SymbolTable symbol_table;