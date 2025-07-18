	.file   "08.S.cact"
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
	lw     t1, -20(s0)
	li      t2, 1
	subw     t0, t1, t2
	sw     t0, -24(s0)
	lw     s7, -24(s0)
	sw     s7, -20(s0)
	lw     a0, -20(s0)
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
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	li      s7, 10
	la      s6, GVAR0
	sw     s7, 0(s6)
	la      s4, GVAR0
	lw     a0, 0(s4)
	call    func
	nop
	sw     a0, -24(s0)
	lw     s7, -24(s0)
	sw     s7, -20(s0)
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
	.bss
	.align  2
	.type   GVAR0, @object
	.size   GVAR0, 4
GVAR0:
	.zero   4
