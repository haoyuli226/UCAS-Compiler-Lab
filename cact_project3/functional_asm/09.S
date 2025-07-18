	.file   "09.S.cact"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	
	.text
	.align   1
	.globl   defn
	.type    defn, @function
defn:
	addi    sp, sp, -16
	sd      ra, 8(sp)
	sd      s0, 0(sp)
	addi    s0, sp, 16
	li      a0, 4
	ld      ra, 8(sp)
	ld      s0, 0(sp)
	addi    sp, sp, 16
	jr      ra
	.size   defn, .-defn
	ld      ra, 8(sp)
	ld      s0, 0(sp)
	addi    sp, sp, 16
	jr      ra
	.size   defn, .-defn
	
	.text
	.align   1
	.globl   main
	.type    main, @function
main:
	addi    sp, sp, -32
	sd      ra, 24(sp)
	sd      s0, 16(sp)
	addi    s0, sp, 32
	li      s1, 0
	sw      s1, -20(s0)
	call    defn
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
	
	.section    .rodata
