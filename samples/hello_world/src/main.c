/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <chip_chipregs.h>

#ifdef CONFIG_SOC_IT8XXX2_REG_SET_V2
#define IT8XXX2_JTAG_PINS_BASE_ADDR 0xf01660
#else
#define IT8XXX2_JTAG_PINS_BASE_ADDR 0xf01610
#endif

#define GPCRA0			ECREG(IT8XXX2_JTAG_PINS_BASE_ADDR + 0x0)
#define GPCRA1			ECREG(IT8XXX2_JTAG_PINS_BASE_ADDR + 0x1)
#define GPCRA4			ECREG(IT8XXX2_JTAG_PINS_BASE_ADDR + 0x4)
#define GPCRA5			ECREG(IT8XXX2_JTAG_PINS_BASE_ADDR + 0x5)
#define GPCRA6			ECREG(IT8XXX2_JTAG_PINS_BASE_ADDR + 0x6)

int main(void)
{
	printf("Hello World! %s enable jtag ver [1]\n", CONFIG_BOARD);
	printf("JTAG INIT PIN Done\n");

	printf("GPCRA0(0x%x):%02x\n", (uint32_t)&GPCRA0, GPCRA0);
        printf("GPCRA1(0x%x):%02x\n", (uint32_t)&GPCRA1, GPCRA1);
        printf("GPCRA4(0x%x):%02x\n", (uint32_t)&GPCRA4, GPCRA4);
        printf("GPCRA5(0x%x):%02x\n", (uint32_t)&GPCRA5, GPCRA5);
        printf("GPCRA6(0x%x):%02x\n", (uint32_t)&GPCRA6, GPCRA6);
        printf("0x%x:%02x\n", (uint32_t)&IT8XXX2_JTAG_VOLT_SET, IT8XXX2_JTAG_VOLT_SET);
        printf("0x%x:%02x\n", (uint32_t)&IT8XXX2_GCTRL_PMER3, IT8XXX2_GCTRL_PMER3);

	while(1) {
		printf("-\r");
		printf("|\r");
		printf("/\r");
		printf("_\r");
	}
	return 0;
}
