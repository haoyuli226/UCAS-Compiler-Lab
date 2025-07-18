	.file   "15.S.cact"
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
	la      s4, GVAR0
	lw     t1, 0(s4)
	li      t2, 5
	div     t0, t1, t2
	sw     t0, -20(s0)
	lw     a0, -20(s0)
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
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.word   10
