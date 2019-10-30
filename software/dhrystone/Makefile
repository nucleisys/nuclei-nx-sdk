TARGET := dhrystone

C_SRCS := dhry_stubs.c dhry_1.c dhry_2.c 
HEADERS := dhry.h

CFLAGS := -O3 -fno-inline -funroll-loops -Wno-implicit -mexplicit-relocs -save-temps  -fno-builtin-printf -fno-common -falign-functions=4 -falign-jumps=4 -falign-loops=4
#CFLAGS := -O2 -funroll-all-loops -finline-limit=600 -ftree-dominator-opts -fno-if-conversion2 -fselective-scheduling -fno-code-hoisting -fno-common -funroll-loops -finline-functions -falign-functions=4 -falign-jumps=4 -falign-loops=4


BSP_BASE = ../../bsp
include $(BSP_BASE)/core/env/common.mk

