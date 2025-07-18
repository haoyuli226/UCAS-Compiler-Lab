	.file   "28.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   func
	.type    func, @function
func:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	sw      a0, -20(s0)
	la      s4, GVAR0
	lw     t1, 0(s4)
	lw     t2, -20(s0)
	addw     t0, t1, t2
	sw     t0, -24(s0)
	lw     s7, -24(s0)
	la      s6, GVAR0
	sw     s7, 0(s6)
	la      s4, GVAR0
	lw     a0, 0(s4)
	call    print_int
	nop
	la      s4, GVAR0
	lw     a0, 0(s4)
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   func, .-func
	ld      ra, 24(sp)
	ld      s0, 16(sp)
	addi    sp, sp, 32
	jr      ra
	.size   func, .-func
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -64
	sd      ra, 56(sp)
	sd      s0, 48(sp)
	addi    s0, sp, 64
	call    get_int
	nop
	sw     a0, -24(s0)
	lw     s7, -24(s0)
	sw     s7, -20(s0)
	lw     t3, -20(s0)
	li      t4, 10
	blt     t4, t3, L3
L4:
	j       L2
L3:
	lw     a0, -20(s0)
	call    func
	nop
	sw     a0, -28(s0)
	lw     t3, -28(s0)
	li      t4, 0
	bne     t3, t4, L1
L5:
	j       L2
L1:
	li      s7, 1
	sw     s7, -20(s0)
	j       L0
L2:
	li      s7, 0
	sw     s7, -20(s0)
L0:
	call    get_int
	nop
	sw     a0, -32(s0)
	lw     s7, -32(s0)
	sw     s7, -20(s0)
	lw     t3, -20(s0)
	li      t4, 11
	blt     t4, t3, L9
L10:
	j       L8
L9:
	lw     a0, -20(s0)
	call    func
	nop
	sw     a0, -36(s0)
	lw     t3, -36(s0)
	li      t4, 0
	bne     t3, t4, L7
L11:
	j       L8
L7:
	li      s7, 1
	sw     s7, -20(s0)
	j       L6
L8:
	li      s7, 0
	sw     s7, -20(s0)
L6:
	call    get_int
	nop
	sw     a0, -40(s0)
	lw     s7, -40(s0)
	sw     s7, -20(s0)
	lw     t3, -20(s0)
	li      t4, 99
	ble     t3, t4, L13
L16:
	j       L15
L15:
	lw     a0, -20(s0)
	call    func
	nop
	sw     a0, -44(s0)
	lw     t3, -44(s0)
	li      t4, 0
	bne     t3, t4, L13
L17:
	j       L14
L13:
	li      s7, 1
	sw     s7, -20(s0)
	j       L12
L14:
	li      s7, 0
	sw     s7, -20(s0)
L12:
	call    get_int
	nop
	sw     a0, -48(s0)
	lw     s7, -48(s0)
	sw     s7, -20(s0)
	lw     t3, -20(s0)
	li      t4, 100
	ble     t3, t4, L19
L22:
	j       L21
L21:
	lw     a0, -20(s0)
	call    func
	nop
	sw     a0, -52(s0)
	lw     t3, -52(s0)
	li      t4, 0
	bne     t3, t4, L19
L23:
	j       L20
L19:
	li      s7, 1
	sw     s7, -20(s0)
	j       L18
L20:
	li      s7, 0
	sw     s7, -20(s0)
L18:
	li      a0, 99
	call    func
	nop
	sw     a0, -56(s0)
	lw     t1, -56(s0)
	seqz    t0, t1
	sw     t0, -60(s0)
	lw     t3, -60(s0)
	li      t4, 0
	bne     t3, t4, L27
L28:
	j       L26
L27:
	li      a0, 100
	call    func
	nop
	sw     a0, -64(s0)
	lw     t3, -64(s0)
	li      t4, 0
	bne     t3, t4, L25
L29:
	j       L26
L25:
	li      s7, 1
	sw     s7, -20(s0)
	j       L24
L26:
	li      s7, 0
	sw     s7, -20(s0)
L24:
	li      a0, 0
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
	
	.globl  GVAR0
	.data
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.word   0
