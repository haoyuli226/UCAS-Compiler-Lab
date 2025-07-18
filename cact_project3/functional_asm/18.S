	.file   "18.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   ifElseIf
	.type    ifElseIf, @function
ifElseIf:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	li      s7, 5
	sw     s7, -20(s0)
	li      s7, 10
	sw     s7, -24(s0)
	lw     t3, -20(s0)
	li      t4, 6
	beq     t3, t4, L1
L4:
	j       L3
L3:
	lw     t3, -24(s0)
	li      t4, 0xb
	beq     t3, t4, L1
L5:
	j       L2
L1:
	lw     a0, -20(s0)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   ifElseIf, .-ifElseIf
	j       L0
L2:
	lw     t3, -24(s0)
	li      t4, 10
	beq     t3, t4, L9
L10:
	j       L8
L9:
	lw     t3, -20(s0)
	li      t4, 1
	beq     t3, t4, L7
L11:
	j       L8
L7:
	li      s7, 25
	sw     s7, -20(s0)
	j       L6
L8:
	lw     t3, -24(s0)
	li      t4, 10
	beq     t3, t4, L15
L16:
	j       L14
L15:
	lw     t3, -20(s0)
	li      t4, -5
	beq     t3, t4, L13
L17:
	j       L14
L13:
	lw     t1, -20(s0)
	li      t2, 15
	addw     t0, t1, t2
	sw     t0, -28(s0)
	lw     s7, -28(s0)
	sw     s7, -20(s0)
	j       L12
L14:
	lw     t1, -20(s0)
	neg     t0, t1
	sw     t0, -32(s0)
	lw     s7, -32(s0)
	sw     s7, -20(s0)
L12:
L6:
L0:
	lw     a0, -20(s0)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   ifElseIf, .-ifElseIf
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   ifElseIf, .-ifElseIf
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	call    ifElseIf
	nop
	sw     a0, -20(s0)
	lw     a0, -20(s0)
	call    print_int
	nop
	li      a0, 0
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
