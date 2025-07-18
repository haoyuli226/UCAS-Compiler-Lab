	.file   "21.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   whileIf
	.type    whileIf, @function
whileIf:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
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
	li      t4, 5
	beq     t3, t4, L5
L7:
	j       L6
L5:
	li      s7, 25
	sw     s7, -24(s0)
	j       L4
L6:
	lw     t3, -20(s0)
	li      t4, 10
	beq     t3, t4, L9
L11:
	j       L10
L9:
	li      s7, 42
	sw     s7, -24(s0)
	j       L8
L10:
	lw     t1, -20(s0)
	li      t2, 2
	mul     t0, t1, t2
	sw     t0, -28(s0)
	lw     s7, -28(s0)
	sw     s7, -24(s0)
L8:
L4:
	lw     t1, -20(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -32(s0)
	lw     s7, -32(s0)
	sw     s7, -20(s0)
	j       L0
L1:
	lw     a0, -24(s0)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   whileIf, .-whileIf
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   whileIf, .-whileIf
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	call    whileIf
	nop
	sw     a0, -20(s0)
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
