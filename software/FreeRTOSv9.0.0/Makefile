DEMO :=Demo
DEMO_DIR :=${DEMO}
TARGET = FreeRTOSv9.0.0
CFLAGS += -O2 #-msave-restore  -fno-unroll-loops -flto

BSP_BASE = ../../bsp


C_SRCS += Source/croutine.c  
C_SRCS += Source/list.c  
C_SRCS += Source/queue.c  
C_SRCS += Source/tasks.c  
C_SRCS += Source/timers.c  
C_SRCS += Source/event_groups.c  
C_SRCS += Source/portable/MemMang/heap_4.c  
C_SRCS += Source/portable/GCC/port.c

C_SRCS += ${DEMO_DIR}/main.c

INCLUDES += -ISource/include
INCLUDES += -I${DEMO_DIR}
INCLUDES += -ISource/portable/GCC/



ASM_SRCS += Source/portable/GCC/portasm.S

include $(BSP_BASE)/core/env/common.mk
