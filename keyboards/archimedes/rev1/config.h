// Copyright 2023 SpandexWizard (@SpandexWizard)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MASTER_RIGHT

//define trackball sensor pins and settings
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN 2
#define SPI_MOSI_PIN 3 //from pico to peripheral
#define SPI_MISO_PIN 0 //from peripheral to pico
#define PMW33XX_CS_PIN 1
#define PMW33XX_CPI 1600  // The CPI range is 100-12000, in increments of 100. Defaults to 1600 CPI.
#define MOUSE_EXTENDED_REPORT // Use -32767 to 32767, instead of just -127 to 127.
#define ROTATIONAL_TRANSFORM_ANGLE 15
#define POINTING_DEVICE_INVERT_X


#define SERIAL_USART_TX_PIN 6


#define NO_ACTION_TAPPING

