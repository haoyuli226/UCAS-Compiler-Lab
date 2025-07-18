	.file   "31.S.cact"
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
	li      s7, 3389
	la      s6, GVAR0
	sw     s7, 0(s6)
	la      s4, GVAR0
	lw     t3, 0(s4)
	li      t4, 10000
	blt     t3, t4, L1
L2:
	j       L0
L1:
	la      s4, GVAR0
	lw     t1, 0(s4)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -20(s0)
	lw     s7, -20(s0)
	la      s6, GVAR0
	sw     s7, 0(s6)
	li      s1, 112
	sw      s1, -24(s0)
L3:
	lw     t3, -24(s0)
	li      t4, 10
	blt     t4, t3, L5
L6:
	j       L4
L5:
	lw     t1, -24(s0)
	li      t2, 88
	subw     t0, t1, t2
	sw     t0, -28(s0)
	lw     s7, -28(s0)
	sw     s7, -24(s0)
	lw     t3, -24(s0)
	li      t4, 1000
	blt     t3, t4, L8
L9:
	j       L7
L8:
	li      s1, 9
	sw      s1, -32(s0)
	li      s1, 11
	sw      s1, -36(s0)
	li      s7, 10
	sw     s7, -32(s0)
	lw     t1, -24(s0)
	lw     t2, -32(s0)
	subw     t0, t1, t2
	sw     t0, -40(s0)
	lw     s7, -40(s0)
	sw     s7, -24(s0)
	li      s1, 11
	sw      s1, -44(s0)
	lw     t1, -24(s0)
	lw     t2, -44(s0)
	addw     t0, t1, t2
	sw     t0, -48(s0)
	lw     t1, -48(s0)
	lw     t2, -36(s0)
	addw     t0, t1, t2
	sw     t0, -52(s0)
	lw     s7, -52(s0)
	sw     s7, -24(s0)
L7:
	j       L3
L4:
	lw     a0, -24(s0)
	call    print_int
	nop
L0:
	la      s4, GVAR0
	lw     a0, 0(s4)
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
	.bss
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.zero   4
	
	.section    .rodata
	
	.section    .rodata
	
	.section    .rodata
	
	.section    .rodata
