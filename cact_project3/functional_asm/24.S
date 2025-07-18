	.file   "24.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	li      s1, 10
	sw      s1, -20(s0)
	lw     t1, -20(s0)
	li      t2, 2
	mul     t0, t1, t2
	sw     t0, -24(s0)
	lw     t1, -24(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -28(s0)
	lw     a0, -28(s0)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   main, .-main
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   main, .-main
	
	.section    .rodata
