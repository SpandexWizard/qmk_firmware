// Copyright 2023 SpandexWizard (@SpandexWizard)
// SPDX-License-Identifier: GPL-2.0-or-later

#include_next <halconf.h>

#define HAL_USE_SPI TRUE
#define SPI_USE_WAIT TRUE
#define SPI_SELECT_MODE SPI_SELECT_MODE_PAD