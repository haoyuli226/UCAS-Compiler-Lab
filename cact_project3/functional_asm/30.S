	.file   "30.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   func
	.type    func, @function
func:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	li      s1, -1
	sw      s1, -20(s0)
	la      s4, GVAR0
	lw     s7, 0(s4)
	sw     s7, -20(s0)
	li      s1, 1
	sw      s1, -24(s0)
	lw     t3, -24(s0)
	lw     t4, -20(s0)
	beq     t3, t4, L1
L3:
	j       L2
L1:
	lw     t1, -24(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -28(s0)
	lw     s7, -28(s0)
	sw     s7, -24(s0)
	li      a0, 1
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   func, .-func
	j       L0
L2:
	li      a0, 0
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   func, .-func
L0:
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   func, .-func
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -48
	sd      ra, 40(sp)
	sd      s0, 32(sp)
	addi    s0, sp, 48
	li      s1, 0
	sw      s1, -20(s0)
	li      s1, 0
	sw      s1, -24(s0)
L4:
	lw     t3, -24(s0)
	li      t4, 100
	blt     t3, t4, L6
L7:
	j       L5
L6:
	call    func
	nop
	sw     a0, -28(s0)
	lw     t3, -28(s0)
	li      t4, 1
	beq     t3, t4, L9
L10:
	j       L8
L9:
	lw     t1, -20(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -32(s0)
	lw     s7, -32(s0)
	sw     s7, -20(s0)
L8:
	lw     t1, -24(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -36(s0)
	lw     s7, -36(s0)
	sw     s7, -24(s0)
	j       L4
L5:
	lw     t3, -20(s0)
	li      t4, 100
	blt     t3, t4, L12
L14:
	j       L13
L12:
	li      a0, 1
	call    print_int
	nop
	j       L11
L13:
	li      a0, 0
	call    print_int
	nop
L11:
	li      a0, 0
	ld      ra, 40(sp)
	ld      s0, 32(sp)
	addi    sp, sp, 48
	jr      ra
	.size   main, .-main
	ld      ra, 40(sp)
	ld      s0, 32(sp)
	addi    sp, sp, 48
	jr      ra
	.size   main, .-main
	
	.globl  GVAR0
	.data
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.word   7
	
	.section    .rodata
	
	.section    .rodata
	
	.section    .rodata
	
	.section    .rodata
