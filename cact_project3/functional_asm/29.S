	.file   "29.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   inc_a
	.type    inc_a, @function
inc_a:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	li      s1, 0
	sw      s1, -20(s0)
	la      s4, GVAR0
	lw     s7, 0(s4)
	sw     s7, -20(s0)
	lw     t1, -20(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -24(s0)
	lw     s7, -24(s0)
	sw     s7, -20(s0)
	lw     s7, -20(s0)
	la      s6, GVAR0
	sw     s7, 0(s6)
	la      s4, GVAR0
	lw     a0, 0(s4)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   inc_a, .-inc_a
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   inc_a, .-inc_a
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -80
	sd      ra, 72(sp)
	sd      s0, 64(sp)
	addi    s0, sp, 80
	li      s1, 5
	sw      s1, -20(s0)
L0:
	lw     t3, -20(s0)
	li      t4, 0
	ble     t4, t3, L2
L3:
	j       L1
L2:
	call    inc_a
	nop
	sw     a0, -24(s0)
	lw     t3, -24(s0)
	li      t4, 0
	bne     t3, t4, L7
L8:
	j       L4
L7:
	call    inc_a
	nop
	sw     a0, -28(s0)
	lw     t3, -28(s0)
	li      t4, 0
	bne     t3, t4, L6
L9:
	j       L4
L6:
	call    inc_a
	nop
	sw     a0, -32(s0)
	lw     t3, -32(s0)
	li      t4, 0
	bne     t3, t4, L5
L10:
	j       L4
L5:
	la      s4, GVAR0
	lw     t1, 0(s4)
	la      s4, GVAR1
	lw     t2, 0(s4)
	addw     t0, t1, t2
	sw     t0, -36(s0)
	lw     s7, -36(s0)
	la      s6, GVAR0
	sw     s7, 0(s6)
L4:
	call    inc_a
	nop
	sw     a0, -40(s0)
	lw     t3, -40(s0)
	li      t4, 14
	blt     t3, t4, L12
L15:
	j       L14
L14:
	call    inc_a
	nop
	sw     a0, -44(s0)
	lw     t3, -44(s0)
	li      t4, 0
	bne     t3, t4, L16
L17:
	j       L13
L16:
	call    inc_a
	nop
	sw     a0, -48(s0)
	call    inc_a
	nop
	sw     a0, -52(s0)
	lw     t1, -48(s0)
	lw     t2, -52(s0)
	subw     t0, t1, t2
	sw     t0, -56(s0)
	lw     t1, -56(s0)
	li      t2, 1
	addw     t0, t1, t2
	sw     t0, -60(s0)
	lw     t3, -60(s0)
	li      t4, 0
	bne     t3, t4, L12
L18:
	j       L13
L12:
	la      s4, GVAR1
	lw     s7, 0(s4)
	la      s6, GVAR0
	sw     s7, 0(s6)
	la      s4, GVAR1
	lw     t1, 0(s4)
	li      t2, 2
	mul     t0, t1, t2
	sw     t0, -64(s0)
	lw     s7, -64(s0)
	la      s6, GVAR1
	sw     s7, 0(s6)
	j       L11
L13:
	call    inc_a
	nop
	sw     a0, -68(s0)
L11:
	lw     t1, -20(s0)
	li      t2, 1
	subw     t0, t1, t2
	sw     t0, -72(s0)
	lw     s7, -72(s0)
	sw     s7, -20(s0)
	j       L0
L1:
	la      s4, GVAR0
	lw     t1, 0(s4)
	la      s4, GVAR1
	lw     t2, 0(s4)
	addw     t0, t1, t2
	sw     t0, -76(s0)
	lw     a0, -76(s0)
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
	
	.globl  GVAR0
	.data
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.word   -1
	
	.globl  GVAR1
	.data
	.align  2
	.type   GVAR1, @object
	.size   GVAR1, 4
GVAR1:
	.word   1
	
	.section    .rodata
	
	.section    .rodata
