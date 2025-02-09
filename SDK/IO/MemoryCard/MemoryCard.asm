.ifndef KAR_SDK_IO_MEMORYCARD

#defines functions and macros for writing memory card values

#defines the memory ports we can use for writing and reading data
.set GC_SYSTEM_EXTRA_SLOT_PORT_A, 0
.set GC_SYSTEM_EXTRA_SLOT_PORT_B, 1

#defines function addresses
.set FUNC_MemoryCard_StoreValueInMemory, 0x80006EEC
.set FUNC_MemoryCard_StoreDefaultValues, 0x8000714c

.endif
.set KAR_SDK_IO_MEMORYCARD, 1