/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'DespertadorCPU'
 * SOPC Builder design path: ../../DespertadorCPU.sopcinfo
 *
 * Generated: Tue Aug 13 14:38:21 CST 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00002820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xe
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00001020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xe
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00001000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00002820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xe
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00001020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xe
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00001000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x30c8
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x30c8
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x30c8
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "DespertadorCPU"


/*
 * btnapagar configuration
 *
 */

#define ALT_MODULE_CLASS_btnapagar altera_avalon_pio
#define BTNAPAGAR_BASE 0x3050
#define BTNAPAGAR_BIT_CLEARING_EDGE_REGISTER 0
#define BTNAPAGAR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BTNAPAGAR_CAPTURE 0
#define BTNAPAGAR_DATA_WIDTH 1
#define BTNAPAGAR_DO_TEST_BENCH_WIRING 0
#define BTNAPAGAR_DRIVEN_SIM_VALUE 0
#define BTNAPAGAR_EDGE_TYPE "NONE"
#define BTNAPAGAR_FREQ 50000000
#define BTNAPAGAR_HAS_IN 1
#define BTNAPAGAR_HAS_OUT 0
#define BTNAPAGAR_HAS_TRI 0
#define BTNAPAGAR_IRQ -1
#define BTNAPAGAR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BTNAPAGAR_IRQ_TYPE "NONE"
#define BTNAPAGAR_NAME "/dev/btnapagar"
#define BTNAPAGAR_RESET_VALUE 0
#define BTNAPAGAR_SPAN 16
#define BTNAPAGAR_TYPE "altera_avalon_pio"


/*
 * btnhora configuration
 *
 */

#define ALT_MODULE_CLASS_btnhora altera_avalon_pio
#define BTNHORA_BASE 0x3070
#define BTNHORA_BIT_CLEARING_EDGE_REGISTER 0
#define BTNHORA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BTNHORA_CAPTURE 0
#define BTNHORA_DATA_WIDTH 1
#define BTNHORA_DO_TEST_BENCH_WIRING 0
#define BTNHORA_DRIVEN_SIM_VALUE 0
#define BTNHORA_EDGE_TYPE "NONE"
#define BTNHORA_FREQ 50000000
#define BTNHORA_HAS_IN 1
#define BTNHORA_HAS_OUT 0
#define BTNHORA_HAS_TRI 0
#define BTNHORA_IRQ -1
#define BTNHORA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BTNHORA_IRQ_TYPE "NONE"
#define BTNHORA_NAME "/dev/btnhora"
#define BTNHORA_RESET_VALUE 0
#define BTNHORA_SPAN 16
#define BTNHORA_TYPE "altera_avalon_pio"


/*
 * btnmin configuration
 *
 */

#define ALT_MODULE_CLASS_btnmin altera_avalon_pio
#define BTNMIN_BASE 0x3060
#define BTNMIN_BIT_CLEARING_EDGE_REGISTER 0
#define BTNMIN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BTNMIN_CAPTURE 0
#define BTNMIN_DATA_WIDTH 1
#define BTNMIN_DO_TEST_BENCH_WIRING 0
#define BTNMIN_DRIVEN_SIM_VALUE 0
#define BTNMIN_EDGE_TYPE "NONE"
#define BTNMIN_FREQ 50000000
#define BTNMIN_HAS_IN 1
#define BTNMIN_HAS_OUT 0
#define BTNMIN_HAS_TRI 0
#define BTNMIN_IRQ -1
#define BTNMIN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BTNMIN_IRQ_TYPE "NONE"
#define BTNMIN_NAME "/dev/btnmin"
#define BTNMIN_RESET_VALUE 0
#define BTNMIN_SPAN 16
#define BTNMIN_TYPE "altera_avalon_pio"


/*
 * buzzer configuration
 *
 */

#define ALT_MODULE_CLASS_buzzer altera_avalon_pio
#define BUZZER_BASE 0x3030
#define BUZZER_BIT_CLEARING_EDGE_REGISTER 0
#define BUZZER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUZZER_CAPTURE 0
#define BUZZER_DATA_WIDTH 1
#define BUZZER_DO_TEST_BENCH_WIRING 0
#define BUZZER_DRIVEN_SIM_VALUE 0
#define BUZZER_EDGE_TYPE "NONE"
#define BUZZER_FREQ 50000000
#define BUZZER_HAS_IN 0
#define BUZZER_HAS_OUT 1
#define BUZZER_HAS_TRI 0
#define BUZZER_IRQ -1
#define BUZZER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUZZER_IRQ_TYPE "NONE"
#define BUZZER_NAME "/dev/buzzer"
#define BUZZER_RESET_VALUE 0
#define BUZZER_SPAN 16
#define BUZZER_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * hora1 configuration
 *
 */

#define ALT_MODULE_CLASS_hora1 altera_avalon_pio
#define HORA1_BASE 0x30b0
#define HORA1_BIT_CLEARING_EDGE_REGISTER 0
#define HORA1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HORA1_CAPTURE 0
#define HORA1_DATA_WIDTH 7
#define HORA1_DO_TEST_BENCH_WIRING 0
#define HORA1_DRIVEN_SIM_VALUE 0
#define HORA1_EDGE_TYPE "NONE"
#define HORA1_FREQ 50000000
#define HORA1_HAS_IN 0
#define HORA1_HAS_OUT 1
#define HORA1_HAS_TRI 0
#define HORA1_IRQ -1
#define HORA1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HORA1_IRQ_TYPE "NONE"
#define HORA1_NAME "/dev/hora1"
#define HORA1_RESET_VALUE 0
#define HORA1_SPAN 16
#define HORA1_TYPE "altera_avalon_pio"


/*
 * hora2 configuration
 *
 */

#define ALT_MODULE_CLASS_hora2 altera_avalon_pio
#define HORA2_BASE 0x30a0
#define HORA2_BIT_CLEARING_EDGE_REGISTER 0
#define HORA2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HORA2_CAPTURE 0
#define HORA2_DATA_WIDTH 7
#define HORA2_DO_TEST_BENCH_WIRING 0
#define HORA2_DRIVEN_SIM_VALUE 0
#define HORA2_EDGE_TYPE "NONE"
#define HORA2_FREQ 50000000
#define HORA2_HAS_IN 0
#define HORA2_HAS_OUT 1
#define HORA2_HAS_TRI 0
#define HORA2_IRQ -1
#define HORA2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HORA2_IRQ_TYPE "NONE"
#define HORA2_NAME "/dev/hora2"
#define HORA2_RESET_VALUE 0
#define HORA2_SPAN 16
#define HORA2_TYPE "altera_avalon_pio"


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x30c8
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * memory configuration
 *
 */

#define ALT_MODULE_CLASS_memory altera_avalon_onchip_memory2
#define MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define MEMORY_BASE 0x1000
#define MEMORY_CONTENTS_INFO ""
#define MEMORY_DUAL_PORT 0
#define MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define MEMORY_INIT_CONTENTS_FILE "DespertadorCPU_memory"
#define MEMORY_INIT_MEM_CONTENT 1
#define MEMORY_INSTANCE_ID "NONE"
#define MEMORY_IRQ -1
#define MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MEMORY_NAME "/dev/memory"
#define MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define MEMORY_RAM_BLOCK_TYPE "AUTO"
#define MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define MEMORY_SINGLE_CLOCK_OP 0
#define MEMORY_SIZE_MULTIPLE 1
#define MEMORY_SIZE_VALUE 4096
#define MEMORY_SPAN 4096
#define MEMORY_TYPE "altera_avalon_onchip_memory2"
#define MEMORY_WRITABLE 1


/*
 * min1 configuration
 *
 */

#define ALT_MODULE_CLASS_min1 altera_avalon_pio
#define MIN1_BASE 0x3090
#define MIN1_BIT_CLEARING_EDGE_REGISTER 0
#define MIN1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MIN1_CAPTURE 0
#define MIN1_DATA_WIDTH 7
#define MIN1_DO_TEST_BENCH_WIRING 0
#define MIN1_DRIVEN_SIM_VALUE 0
#define MIN1_EDGE_TYPE "NONE"
#define MIN1_FREQ 50000000
#define MIN1_HAS_IN 0
#define MIN1_HAS_OUT 1
#define MIN1_HAS_TRI 0
#define MIN1_IRQ -1
#define MIN1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MIN1_IRQ_TYPE "NONE"
#define MIN1_NAME "/dev/min1"
#define MIN1_RESET_VALUE 0
#define MIN1_SPAN 16
#define MIN1_TYPE "altera_avalon_pio"


/*
 * min2 configuration
 *
 */

#define ALT_MODULE_CLASS_min2 altera_avalon_pio
#define MIN2_BASE 0x3080
#define MIN2_BIT_CLEARING_EDGE_REGISTER 0
#define MIN2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define MIN2_CAPTURE 0
#define MIN2_DATA_WIDTH 7
#define MIN2_DO_TEST_BENCH_WIRING 0
#define MIN2_DRIVEN_SIM_VALUE 0
#define MIN2_EDGE_TYPE "NONE"
#define MIN2_FREQ 50000000
#define MIN2_HAS_IN 0
#define MIN2_HAS_OUT 1
#define MIN2_HAS_TRI 0
#define MIN2_IRQ -1
#define MIN2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MIN2_IRQ_TYPE "NONE"
#define MIN2_NAME "/dev/min2"
#define MIN2_RESET_VALUE 0
#define MIN2_SPAN 16
#define MIN2_TYPE "altera_avalon_pio"


/*
 * swinicio configuration
 *
 */

#define ALT_MODULE_CLASS_swinicio altera_avalon_pio
#define SWINICIO_BASE 0x3020
#define SWINICIO_BIT_CLEARING_EDGE_REGISTER 0
#define SWINICIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWINICIO_CAPTURE 0
#define SWINICIO_DATA_WIDTH 1
#define SWINICIO_DO_TEST_BENCH_WIRING 0
#define SWINICIO_DRIVEN_SIM_VALUE 0
#define SWINICIO_EDGE_TYPE "NONE"
#define SWINICIO_FREQ 50000000
#define SWINICIO_HAS_IN 1
#define SWINICIO_HAS_OUT 0
#define SWINICIO_HAS_TRI 0
#define SWINICIO_IRQ -1
#define SWINICIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWINICIO_IRQ_TYPE "NONE"
#define SWINICIO_NAME "/dev/swinicio"
#define SWINICIO_RESET_VALUE 0
#define SWINICIO_SPAN 16
#define SWINICIO_TYPE "altera_avalon_pio"


/*
 * swmodo configuration
 *
 */

#define ALT_MODULE_CLASS_swmodo altera_avalon_pio
#define SWMODO_BASE 0x3040
#define SWMODO_BIT_CLEARING_EDGE_REGISTER 0
#define SWMODO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWMODO_CAPTURE 0
#define SWMODO_DATA_WIDTH 1
#define SWMODO_DO_TEST_BENCH_WIRING 0
#define SWMODO_DRIVEN_SIM_VALUE 0
#define SWMODO_EDGE_TYPE "NONE"
#define SWMODO_FREQ 50000000
#define SWMODO_HAS_IN 1
#define SWMODO_HAS_OUT 0
#define SWMODO_HAS_TRI 0
#define SWMODO_IRQ -1
#define SWMODO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWMODO_IRQ_TYPE "NONE"
#define SWMODO_NAME "/dev/swmodo"
#define SWMODO_RESET_VALUE 0
#define SWMODO_SPAN 16
#define SWMODO_TYPE "altera_avalon_pio"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x3000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 1
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999999
#define TIMER_0_MULT 1.0
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "s"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
