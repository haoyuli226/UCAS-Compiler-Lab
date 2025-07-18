	.file   "27.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -80
	sd      ra, 72(sp)
	sd      s0, 64(sp)
	addi    s0, sp, 80
	li      s7, 5
	sw     s7, -20(s0)
	li      s7, 5
	sw     s7, -24(s0)
	li      s7, 1
	sw     s7, -28(s0)
	li      s7, -2
	sw     s7, -32(s0)
	li      s7, 2
	sw     s7, -36(s0)
	lw     t1, -32(s0)
	li      t2, 1
	mul     t0, t1, t2
	sw     t0, -40(s0)
	lw     t1, -40(s0)
	li      t2, 2
	div     t0, t1, t2
	sw     t0, -44(s0)
	lw     t3, -44(s0)
	li      t4, 0
	blt     t3, t4, L1
L3:
	j       L2
L2:
	lw     t1, -20(s0)
	lw     t2, -24(s0)
	subw     t0, t1, t2
	sw     t0, -48(s0)
	lw     t3, -48(s0)
	li      t4, 0
	bne     t3, t4, L4
L5:
	j       L0
L4:
	lw     t1, -28(s0)
	li      t2, 3
	addw     t0, t1, t2
	sw     t0, -52(s0)
	lw     t1, -52(s0)
	li      t2, 2
	rem     t0, t1, t2
	sw     t0, -56(s0)
	lw     t3, -56(s0)
	li      t4, 0
	bne     t3, t4, L1
L6:
	j       L0
L1:
	lw     a0, -36(s0)
	call    print_int
	nop
L0:
	lw     t1, -32(s0)
	li      t2, 2
	rem     t0, t1, t2
	sw     t0, -60(s0)
	lw     t1, -60(s0)
	li      t2, 67
	addw     t0, t1, t2
	sw     t0, -64(s0)
	lw     t3, -64(s0)
	li      t4, 0
	blt     t3, t4, L8
L10:
	j       L9
L9:
	lw     t1, -20(s0)
	lw     t2, -24(s0)
	subw     t0, t1, t2
	sw     t0, -68(s0)
	lw     t3, -68(s0)
	li      t4, 0
	bne     t3, t4, L11
L12:
	j       L7
L11:
	lw     t1, -28(s0)
	li      t2, 2
	addw     t0, t1, t2
	sw     t0, -72(s0)
	lw     t1, -72(s0)
	li      t2, 2
	rem     t0, t1, t2
	sw     t0, -76(s0)
	lw     t3, -76(s0)
	li      t4, 0
	bne     t3, t4, L8
L13:
	j       L7
L8:
	li      s7, 4
	sw     s7, -36(s0)
	lw     a0, -36(s0)
	call    print_int
	nop
L7:
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
