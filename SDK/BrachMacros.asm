.ifndef KAR_SDK_BRANCH

#defines various macros for branching

.macro branchl reg, address
lis \reg, \address @h
ori \reg,\reg,\address @l
mtctr \reg
bctrl
.endm

.macro branch reg, address
lis \reg, \address @h
ori \reg,\reg,\address @l
mtctr \reg
bctr
.endm

.macro backup
mflr r0
stw r0, 0x4(r1)
stwu r1,-0x100(r1)	# make space for 12 registers
stmw r20,0x8(r1)
.endm

 .macro restore
lmw r20,0x8(r1)
lwz r0, 0x104(r1)
addi r1,r1,0x100 # release the space
mtlr r0
.endm

.macro backupall
mflr r0
stw r0, 0x4(r1)
stwu r1,-0x100(r1)	# make space for 12 registers
stmw r3,0x8(r1)
.endm

.macro restoreall
lmw r3,0x8(r1)
lwz r0, 0x104(r1)
addi r1,r1,0x100	# release the space
mtlr r0
.endm

.endif
.set KAR_SDK_BRANCH, 1