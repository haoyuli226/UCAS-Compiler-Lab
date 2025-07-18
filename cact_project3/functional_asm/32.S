	.file   "32.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   float_abs
	.type    float_abs, @function
float_abs:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	fsw      fa0, -20(s0)
	flw     ft3, -20(s0)
	la   s4, IMM0
	flw     ft4, 0(s4)
	flt.s     t5, ft3, ft4
	bnez    t5, L1
L2:
	j       L0
L1:
	flw     ft1, -20(s0)
	fneg.s     ft0, ft1
	fsw     ft0, -24(s0)
	flw     fa0, -24(s0)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   float_abs, .-float_abs
L0:
	flw     fa0, -20(s0)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   float_abs, .-float_abs
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   float_abs, .-float_abs
	
	.text
	.align   1
	.globl   float_eq
	.type    float_eq, @function
float_eq:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	fsw      fa0, -20(s0)
	fsw      fa1, -24(s0)
	flw     ft1, -20(s0)
	flw     ft2, -24(s0)
	fsub.s     ft0, ft1, ft2
	fsw     ft0, -28(s0)
	flw     fa0, -28(s0)
	call    float_abs
	nop
	fsw     fa0, -32(s0)
	flw     ft3, -32(s0)
	la      s4, GVAR2
	flw     ft4, 0(s4)
	flt.s     t5, ft3, ft4
	bnez    t5, L4
L6:
	j       L5
L4:
	li      a0, 1
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   float_eq, .-float_eq
	j       L3
L5:
	li      a0, 0
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   float_eq, .-float_eq
L3:
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   float_eq, .-float_eq
	
	.text
	.align   1
	.globl   error
	.type    error, @function
error:
	addi    sp, sp, -16
	sd      ra, 8(sp)
	sd      s0, 0(sp)
	addi    s0, sp, 16
	li      a0, -1
	call    print_int
	nop
	ld      ra, 8(sp)
	ld      s0, 0(sp)
	addi    sp, sp, 16
	jr      ra
	.size   error, .-error
	
	.text
	.align   1
	.globl   ok
	.type    ok, @function
ok:
	addi    sp, sp, -16
	sd      ra, 8(sp)
	sd      s0, 0(sp)
	addi    s0, sp, 16
	li      a0, 1
	call    print_int
	nop
	ld      ra, 8(sp)
	ld      s0, 0(sp)
	addi    sp, sp, 16
	jr      ra
	.size   ok, .-ok
	
	.text
	.align   1
	.globl   assert
	.type    assert, @function
assert:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	sw      a0, -20(s0)
	lw     t3, -20(s0)
	li      t4, 0
	beq     t3, t4, L8
L10:
	j       L9
L8:
	call    error
	nop
	j       L7
L9:
	call    ok
	nop
L7:
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   assert, .-assert
	
	.text
	.align   1
	.globl   assert_not
	.type    assert_not, @function
assert_not:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	sw      a0, -20(s0)
	lw     t3, -20(s0)
	li      t4, 0
	bne     t3, t4, L12
L14:
	j       L13
L12:
	call    error
	nop
	j       L11
L13:
	call    ok
	nop
L11:
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   assert_not, .-assert_not
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -80
	sd      ra, 72(sp)
	sd      s0, 64(sp)
	addi    s0, sp, 80
	la      s2, LVAR5
	flw     fs1, 0(s2)
	fsw     fs1, -20(s0)
	la      s4, GVAR1
	flw     ft1, 0(s4)
	la      s4, GVAR0
	flw     ft2, 0(s4)
	fmul.s     ft0, ft1, ft2
	fsw     ft0, -24(s0)
	flw     ft1, -24(s0)
	la      s4, GVAR0
	flw     ft2, 0(s4)
	fmul.s     ft0, ft1, ft2
	fsw     ft0, -28(s0)
	flw     fs7, -28(s0)
	fsw     fs7, -20(s0)
	la      s2, LVAR6
	flw     fs1, 0(s2)
	fsw     fs1, -32(s0)
	flw     ft1, -32(s0)
	la      s4, GVAR3
	flw     ft2, 0(s4)
	fmul.s     ft0, ft1, ft2
	fsw     ft0, -36(s0)
	flw     ft1, -36(s0)
	la      s4, GVAR0
	flw     ft2, 0(s4)
	fmul.s     ft0, ft1, ft2
	fsw     ft0, -40(s0)
	flw     fs7, -40(s0)
	fsw     fs7, -32(s0)
	la      s2, LVAR7
	flw     fs1, 0(s2)
	fsw     fs1, -44(s0)
	la      s4, GVAR1
	flw     ft1, 0(s4)
	flw     ft2, -44(s0)
	fmul.s     ft0, ft1, ft2
	fsw     ft0, -48(s0)
	flw     ft1, -48(s0)
	la      s4, GVAR0
	flw     ft2, 0(s4)
	fmul.s     ft0, ft1, ft2
	fsw     ft0, -52(s0)
	flw     fs7, -52(s0)
	fsw     fs7, -44(s0)
	li      s1, 0
	sw      s1, -56(s0)
	la      s4, GVAR9
	lw     t1, 0(s4)
	la      s4, GVAR10
	lw     t2, 0(s4)
	addw     t0, t1, t2
	sw     t0, -60(s0)
	lw     s7, -60(s0)
	sw     s7, -56(s0)
	la      s4, GVAR4
	flw     fa0, 0(s4)
	la      s4, GVAR5
	flw     fa1, 0(s4)
	call    float_eq
	nop
	sw     a0, -64(s0)
	lw     a0, -64(s0)
	call    assert_not
	nop
	flw     fa0, -20(s0)
	flw     fa1, -32(s0)
	call    float_eq
	nop
	sw     a0, -68(s0)
	lw     a0, -68(s0)
	call    assert_not
	nop
	flw     fa0, -32(s0)
	flw     fa1, -44(s0)
	call    float_eq
	nop
	sw     a0, -72(s0)
	lw     a0, -72(s0)
	call    assert
	nop
	la      s4, GVAR6
	flw     fa0, 0(s4)
	la      s4, GVAR7
	flw     fa1, 0(s4)
	call    float_eq
	nop
	sw     a0, -76(s0)
	lw     a0, -76(s0)
	call    assert_not
	nop
	li      a0, 0
	ld      ra, 72(sp)
	ld      s0, 64(sp)
	addi    sp, sp, 80
	jr      ra
	.size   main, .-main
	ld      ra, 72(sp)
	ld      s0, 64(sp)
	addi    sp, sp, 80
	jr      ra
	.size   main, .-main
	
	.globl  GVAR0
	.section .rodata
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.word   1085276160
	
	.globl  GVAR1
	.section .rodata
	.align  2
	.type   GVAR1, @object
	.size   GVAR1, 4
GVAR1:
	.word   1078530011
	
	.globl  GVAR2
	.section .rodata
	.align  2
	.type   GVAR2, @object
	.size   GVAR2, 4
GVAR2:
	.word   897988541
	
	.globl  GVAR3
	.section .rodata
	.align  2
	.type   GVAR3, @object
	.size   GVAR3, 4
GVAR3:
	.word   1078530011
	
	.globl  GVAR4
	.section .rodata
	.align  2
	.type   GVAR4, @object
	.size   GVAR4, 4
GVAR4:
	.word   1033895936
	
	.globl  GVAR5
	.section .rodata
	.align  2
	.type   GVAR5, @object
	.size   GVAR5, 4
GVAR5:
	.word   -956241920
	
	.globl  GVAR6
	.section .rodata
	.align  2
	.type   GVAR6, @object
	.size   GVAR6, 4
GVAR6:
	.word   1130954752
	
	.globl  GVAR7
	.section .rodata
	.align  2
	.type   GVAR7, @object
	.size   GVAR7, 4
GVAR7:
	.word   1166012416
	
	.globl  GVAR8
	.section .rodata
	.align  2
	.type   GVAR8, @object
	.size   GVAR8, 4
GVAR8:
	.word   1000000000
	
	.globl  GVAR9
	.section .rodata
	.align  2
	.type   GVAR9, @object
	.size   GVAR9, 4
GVAR9:
	.word   2
	
	.globl  GVAR10
	.section .rodata
	.align  2
	.type   GVAR10, @object
	.size   GVAR10, 4
GVAR10:
	.word   3
	.section    .rodata
	.align  3
IMM0:
	.word   0
	
	.section    .rodata
	.align  3
LVAR5:
	.word   0
	
	.section    .rodata
	.align  3
LVAR6:
	.word   1073741824
	
	.section    .rodata
	.align  3
LVAR7:
	.word   1073741824
	
	.section    .rodata
