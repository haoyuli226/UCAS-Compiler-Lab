	.file   "04.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -224
	sd      ra, 216(sp)
	sd      s0, 208(sp)
	addi    s0, sp, 224
	la      s2, LVAR0
	ld      s1, 0(s2)
	sd      s1, -48(s0)
	ld      s1, 8(s2)
	sd      s1, -40(s0)
	ld      s1, 16(s2)
	sd      s1, -32(s0)
	ld      s1, 24(s2)
	sd      s1, -24(s0)
	la      s2, LVAR1
	ld      s1, 0(s2)
	sd      s1, -80(s0)
	ld      s1, 8(s2)
	sd      s1, -72(s0)
	ld      s1, 16(s2)
	sd      s1, -64(s0)
	ld      s1, 24(s2)
	sd      s1, -56(s0)
	la      s2, LVAR2
	ld      s1, 0(s2)
	sd      s1, -112(s0)
	ld      s1, 8(s2)
	sd      s1, -104(s0)
	ld      s1, 16(s2)
	sd      s1, -96(s0)
	ld      s1, 24(s2)
	sd      s1, -88(s0)
	li      t1, 0
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -116(s0)
	li      t1, 0
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -120(s0)
	lw     t1, -116(s0)
	lw     t2, -120(s0)
	addw     t0, t1, t2
	sw     t0, -124(s0)
	li      t1, 2
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -128(s0)
	li      t1, 1
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -132(s0)
	lw     t1, -128(s0)
	lw     t2, -132(s0)
	addw     t0, t1, t2
	sw     t0, -136(s0)
	lw     s3, -136(s0)
	add     s4, s0, s3
	lw     s7, -80(s4)
	lw     s5, -124(s0)
	add     s6, s0, s5
	sw     s7, -112(s6)
	li      t1, 0
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -140(s0)
	li      t1, 1
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -144(s0)
	lw     t1, -140(s0)
	lw     t2, -144(s0)
	addw     t0, t1, t2
	sw     t0, -148(s0)
	li      t1, 1
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -152(s0)
	li      t1, 1
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -156(s0)
	lw     t1, -152(s0)
	lw     t2, -156(s0)
	addw     t0, t1, t2
	sw     t0, -160(s0)
	lw     s3, -160(s0)
	add     s4, s0, s3
	lw     s7, -80(s4)
	lw     s5, -148(s0)
	add     s6, s0, s5
	sw     s7, -112(s6)
	li      t1, 3
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -164(s0)
	li      t1, 1
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -168(s0)
	lw     t1, -164(s0)
	lw     t2, -168(s0)
	addw     t0, t1, t2
	sw     t0, -172(s0)
	li      t1, 0
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -176(s0)
	li      t1, 0
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -180(s0)
	lw     t1, -176(s0)
	lw     t2, -180(s0)
	addw     t0, t1, t2
	sw     t0, -184(s0)
	lw     s3, -172(s0)
	add     s4, s0, s3
	lw     t1, -112(s4)
	lw     s3, -184(s0)
	add     s4, s0, s3
	lw     t2, -112(s4)
	addw     t0, t1, t2
	sw     t0, -188(s0)
	li      t1, 0
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -192(s0)
	li      t1, 1
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -196(s0)
	lw     t1, -192(s0)
	lw     t2, -196(s0)
	addw     t0, t1, t2
	sw     t0, -200(s0)
	lw     t1, -188(s0)
	lw     s3, -200(s0)
	add     s4, s0, s3
	lw     t2, -112(s4)
	addw     t0, t1, t2
	sw     t0, -204(s0)
	li      t1, 2
	li      t2, 8
	mul     t0, t1, t2
	sw     t0, -208(s0)
	li      t1, 0
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -212(s0)
	lw     t1, -208(s0)
	lw     t2, -212(s0)
	addw     t0, t1, t2
	sw     t0, -216(s0)
	lw     t1, -204(s0)
	lw     s3, -216(s0)
	add     s4, s0, s3
	lw     t2, -48(s4)
	addw     t0, t1, t2
	sw     t0, -220(s0)
	lw     a0, -220(s0)
	ld      ra, 216(sp)
	ld      s0, 208(sp)
	addi    sp, sp, 224
	jr      ra
	.size   main, .-main
	ld      ra, 216(sp)
	ld      s0, 208(sp)
	addi    sp, sp, 224
	jr      ra
	.size   main, .-main
	
	.section    .rodata
	.align  3
LVAR0:
	.zero   32
	
	.section    .rodata
	.align  3
LVAR1:
	.word   1
	.word   2
	.word   3
	.word   4
	.word   5
	.word   6
	.word   7
	.word   8
	
	.section    .rodata
	.align  3
LVAR2:
	.word   1
	.word   2
	.word   3
	.word   4
	.word   5
	.word   6
	.word   7
	.word   8
