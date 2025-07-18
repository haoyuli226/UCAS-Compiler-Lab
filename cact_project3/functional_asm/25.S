	.file   "25.S.cact"
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
	call    get_int
	nop
	sw     a0, -20(s0)
	lw     s7, -20(s0)
	la      s6, GVAR0
	sw     s7, 0(s6)
	call    get_int
	nop
	sw     a0, -24(s0)
	lw     s7, -24(s0)
	la      s6, GVAR1
	sw     s7, 0(s6)
	la      s4, GVAR0
	lw     t3, 0(s4)
	la      s4, GVAR1
	lw     t4, 0(s4)
	beq     t3, t4, L3
L4:
	j       L2
L3:
	la      s4, GVAR0
	lw     t3, 0(s4)
	li      t4, 3
	bne     t3, t4, L1
L5:
	j       L2
L1:
	li      s7, 1
	sw     s7, -28(s0)
	j       L0
L2:
	li      s7, 0
	sw     s7, -28(s0)
L0:
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
	
	.globl  GVAR0
	.bss
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.zero   4
	
	.globl  GVAR1
	.bss
	.align  2
	.type   GVAR1, @object
	.size   GVAR1, 4
GVAR1:
	.zero   4
