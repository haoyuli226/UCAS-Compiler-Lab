	.file   "20.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -48
	sd      ra, 40(sp)
	sd      s0, 32(sp)
	addi    s0, sp, 48
	li      s7, 0
	sw     s7, -20(s0)
	li      s7, 0
	sw     s7, -24(s0)
L0:
	lw     t3, -20(s0)
	li      t4, 100
	blt     t3, t4, L2
L3:
	j       L1
L2:
	lw     t3, -20(s0)
	li      t4, 50
	beq     t3, t4, L5
L6:
	j       L4
L5:
	lw     t1, -20(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -28(s0)
	lw     s7, -28(s0)
	sw     s7, -20(s0)
	j       L0
L4:
	lw     t1, -24(s0)
	lw     t2, -20(s0)
	addw     t0, t1, t2
	sw     t0, -32(s0)
	lw     s7, -32(s0)
	sw     s7, -24(s0)
	lw     t1, -20(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -36(s0)
	lw     s7, -36(s0)
	sw     s7, -20(s0)
	j       L0
L1:
	lw     t1, -24(s0)
	li      t2, 256
	rem     t0, t1, t2
	sw     t0, -40(s0)
	lw     a0, -40(s0)
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
