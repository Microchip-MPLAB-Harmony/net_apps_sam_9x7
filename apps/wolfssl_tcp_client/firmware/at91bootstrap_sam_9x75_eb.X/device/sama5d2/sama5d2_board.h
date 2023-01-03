/*
 * Copyright (C) 2017, Microchip Corporation
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef __DEV_SAMA5D2_H__
#define __DEV_SAMA5D2_H__

#if (BOARD_MAINOSC==12000000)
/* PCK: 498MHz, MCK: 166MHz */
#ifdef CONFIG_BUS_SPEED_166MHZ
#define BOARD_PLLA_MULA		82
#define MASTER_CLOCK		166000000
#endif
/* PCK: 348MHz, MCK: 116MHz */
#ifdef CONFIG_BUS_SPEED_116MHZ
#define BOARD_PLLA_MULA		57
#define MASTER_CLOCK		116000000
#endif

#elif (BOARD_MAINOSC==24000000)
/* PCK: 492MHz, MCK: 164MHz */
#define BOARD_PLLA_MULA		40
#define MASTER_CLOCK		164000000
#else
#error "Unsupported external crystal"
#endif

#define BOARD_PCK			((unsigned long)((BOARD_MAINOSC * (BOARD_PLLA_MULA + 1)) / 2))
#define BOARD_MCK			((unsigned long)((BOARD_MAINOSC * (BOARD_PLLA_MULA + 1)) / 2 / 3))

#define BOARD_CKGR_PLLA		(AT91C_CKGR_SRCA | AT91C_CKGR_OUTA_0)
#define BOARD_PLLACOUNT		(0x3F << 8)
#define BOARD_MULA			((AT91C_CKGR_MULA << 2) & (BOARD_PLLA_MULA << 18))
#define BOARD_DIVA			(AT91C_CKGR_DIVA & 1)

#define BOARD_PRESCALER_MAIN_CLOCK	(AT91C_PMC_PLLADIV2_2 \
									| AT91C_PMC_MDIV_3 \
									| AT91C_PMC_CSS_MAIN_CLK)

#define BOARD_PRESCALER_PLLA		(AT91C_PMC_H32MXDIV_H32MXDIV2 \
									| AT91C_PMC_PLLADIV2_2 \
									| AT91C_PMC_MDIV_3 \
									| AT91C_PMC_CSS_PLLA_CLK)

#define PLLA_SETTINGS		(BOARD_CKGR_PLLA | \
							BOARD_PLLACOUNT | \
							BOARD_MULA | \
							BOARD_DIVA)

/*
 * DataFlash Settings
 */
#define CONFIG_SYS_SPI_CLOCK	AT91C_SPI_CLK
#define CONFIG_SYS_SPI_MODE	SPI_MODE3

#if defined(CONFIG_SPI)
#if CONFIG_SPI_BUS == 0
	#define CONFIG_SYS_BASE_SPI	AT91C_BASE_SPI0
	#define CONFIG_SYS_ID_SPI	AT91C_ID_SPI0
	#if CONFIG_SPI_IOSET == 1
		#define CONFIG_SYS_SPI_PCS	AT91C_PIN_PA(17)
	#elif CONFIG_SPI_IOSET == 2
		#define CONFIG_SYS_SPI_PCS	AT91C_PIN_PA(30)
	#else
		#error "Invalid SPI IOSET was chosen"
	#endif
#elif CONFIG_SPI_BUS == 1
	#define CONFIG_SYS_BASE_SPI	AT91C_BASE_SPI1
	#define CONFIG_SYS_ID_SPI	AT91C_ID_SPI1
	#if CONFIG_SPI_IOSET == 1
		#define CONFIG_SYS_SPI_PCS	AT91C_PIN_PC(4)
	#elif CONFIG_SPI_IOSET == 2
		#define CONFIG_SYS_SPI_PCS	AT91C_PIN_PA(25)
	#elif CONFIG_SPI_IOSET == 3
		#define CONFIG_SYS_SPI_PCS	AT91C_PIN_PD(28)
	#else
		#error "Invalid SPI IOSET was chosen"
	#endif
#else
	#error "Invalid SPI BUS was chosen"
#endif
#endif

#if defined(CONFIG_QSPI)
#if CONFIG_QSPI_BUS == 0
#define	CONFIG_SYS_BASE_QSPI		AT91C_BASE_QSPI0
#define	CONFIG_SYS_BASE_QSPI_MEM	AT91C_BASE_QSPI0_MEM
#define	CONFIG_SYS_ID_QSPI		AT91C_ID_QSPI0

#elif CONFIG_QSPI_BUS == 1
#define	CONFIG_SYS_BASE_QSPI		AT91C_BASE_QSPI1
#define	CONFIG_SYS_BASE_QSPI_MEM	AT91C_BASE_QSPI1_MEM
#define	CONFIG_SYS_ID_QSPI		AT91C_ID_QSPI1
#else
#error "Invalid QSPI BUS was chosen"
#endif

#endif

/*
 * NandFlash Settings
 */
#ifdef CONFIG_NANDFLASH
#define CONFIG_SYS_NAND_BASE            AT91C_BASE_CS3
#define CONFIG_SYS_NAND_MASK_ALE        (1 << 21)
#define CONFIG_SYS_NAND_MASK_CLE        (1 << 22)

#if defined(CONFIG_NANDFLASH_IOSET1)
#define CONFIG_SYS_NAND_OE_PIN		AT91C_PIN_PB(2)
#define CONFIG_SYS_NAND_WE_PIN		AT91C_PIN_PA(30)
#define CONFIG_SYS_NAND_ALE_PIN		AT91C_PIN_PB(0)
#define CONFIG_SYS_NAND_CLE_PIN		AT91C_PIN_PB(1)
#define CONFIG_SYS_NAND_ENABLE_PIN      AT91C_PIN_PA(31)
#elif defined(CONFIG_NANDFLASH_IOSET2)
#define CONFIG_SYS_NAND_OE_PIN		AT91C_PIN_PA(12)
#define CONFIG_SYS_NAND_WE_PIN		AT91C_PIN_PA(8)
#define CONFIG_SYS_NAND_ALE_PIN		AT91C_PIN_PA(10)
#define CONFIG_SYS_NAND_CLE_PIN		AT91C_PIN_PA(11)
#define CONFIG_SYS_NAND_ENABLE_PIN      AT91C_PIN_PA(9)
#else
#error "No NAND Flash IOSETs defined"
#endif

#define NO_GALOIS_TABLE_IN_ROM
#endif

/*
 * SDHC Settings
 */
#ifdef CONFIG_SDHC0
#define CONFIG_SYS_BASE_SDHC	AT91C_BASE_SDHC0
#define CONFIG_SYS_ID_SDHC	AT91C_ID_SDMMC0
#endif

#ifdef CONFIG_SDHC1
#define CONFIG_SYS_BASE_SDHC	AT91C_BASE_SDHC1
#define CONFIG_SYS_ID_SDHC	AT91C_ID_SDMMC1
#endif

#endif
