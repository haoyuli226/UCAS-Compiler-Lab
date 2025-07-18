	.file   "03.S.cact"
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
	li      s1, 8
	sw      s1, -24(s0)
	li      s1, 12
	sw      s1, -28(s0)
	lw     t1, -24(s0)
	lw     t2, -28(s0)
	addw     t0, t1, t2
	sw     t0, -32(s0)
	lw     s7, -32(s0)
	sw     s7, -20(s0)
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
	
	.section    .rodata
	
	.section    .rodata
