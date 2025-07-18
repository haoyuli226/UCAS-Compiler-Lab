	.file   "23.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -64
	sd      ra, 56(sp)
	sd      s0, 48(sp)
	addi    s0, sp, 64
	li      s1, 0
	sw      s1, -20(s0)
	la      s4, GVAR0
	lw     t1, 0(s4)
	la      s4, GVAR1
	lw     t2, 0(s4)
	mul     t0, t1, t2
	sw     t0, -24(s0)
	lw     t1, -24(s0)
	la      s4, GVAR2
	lw     t2, 0(s4)
	div     t0, t1, t2
	sw     t0, -28(s0)
	la      s4, GVAR4
	lw     t1, 0(s4)
	la      s4, GVAR3
	lw     t2, 0(s4)
	addw     t0, t1, t2
	sw     t0, -32(s0)
	lw     t3, -28(s0)
	lw     t4, -32(s0)
	beq     t3, t4, L3
L4:
	j       L2
L3:
	la      s4, GVAR0
	lw     t1, 0(s4)
	la      s4, GVAR1
	lw     t2, 0(s4)
	addw     t0, t1, t2
	sw     t0, -36(s0)
	la      s4, GVAR0
	lw     t1, 0(s4)
	lw     t2, -36(s0)
	mul     t0, t1, t2
	sw     t0, -40(s0)
	lw     t1, -40(s0)
	la      s4, GVAR2
	lw     t2, 0(s4)
	addw     t0, t1, t2
	sw     t0, -44(s0)
	la      s4, GVAR3
	lw     t1, 0(s4)
	la      s4, GVAR4
	lw     t2, 0(s4)
	addw     t0, t1, t2
	sw     t0, -48(s0)
	lw     t3, -44(s0)
	lw     t4, -48(s0)
	ble     t3, t4, L1
L5:
	j       L2
L2:
	la      s4, GVAR1
	lw     t1, 0(s4)
	la      s4, GVAR2
	lw     t2, 0(s4)
	mul     t0, t1, t2
	sw     t0, -52(s0)
	la      s4, GVAR0
	lw     t1, 0(s4)
	lw     t2, -52(s0)
	subw     t0, t1, t2
	sw     t0, -56(s0)
	la      s4, GVAR0
	lw     t1, 0(s4)
	la      s4, GVAR2
	lw     t2, 0(s4)
	div     t0, t1, t2
	sw     t0, -60(s0)
	la      s4, GVAR3
	lw     t1, 0(s4)
	lw     t2, -60(s0)
	subw     t0, t1, t2
	sw     t0, -64(s0)
	lw     t3, -56(s0)
	lw     t4, -64(s0)
	beq     t3, t4, L1
L6:
	j       L0
L1:
	li      s7, 1
	sw     s7, -20(s0)
L0:
	lw     a0, -20(s0)
	call    print_int
	nop
	lw     a0, -20(s0)
	ld      ra, 56(sp)
	ld      s0, 48(sp)
	addi    sp, sp, 64
	jr      ra
	.size   main, .-main
	ld      ra, 56(sp)
	ld      s0, 48(sp)
	addi    sp, sp, 64
	jr      ra
	.size   main, .-main
	
	.globl  GVAR0
	.data
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.word   1
	
	.globl  GVAR1
	.data
	.align  2
	.type   GVAR1, @object
	.size   GVAR1, 4
GVAR1:
	.word   0
	
	.globl  GVAR2
	.data
	.align  2
	.type   GVAR2, @object
	.size   GVAR2, 4
GVAR2:
	.word   1
	
	.globl  GVAR3
	.data
	.align  2
	.type   GVAR3, @object
	.size   GVAR3, 4
GVAR3:
	.word   2
	
	.globl  GVAR4
	.data
	.align  2
	.type   GVAR4, @object
	.size   GVAR4, 4
GVAR4:
	.word   4
	
	.section    .rodata
