	.file   "07.S.cact"
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
	li      t1, 4
	li      t2, 4
	mul     t0, t1, t2
	sw     t0, -20(s0)
	lw     s3, -20(s0)
	la      s4, GVAR0
	add     s4, s4, s3
	lw     a0, 0(s4)
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
	
	.globl  GVAR0
	.section .rodata
	.align  3
	.type   GVAR0, @object
	.size   GVAR0, 20
GVAR0:
	.word   0
	.word   1
	.word   2
	.word   3
	.word   4
