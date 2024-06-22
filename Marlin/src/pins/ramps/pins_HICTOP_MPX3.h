/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Arduino Mega with modified RAMPS v1.4 pin assignments
 * ATmega2560, ATmega1280
 *
 * Applies to the following boards:
 *
 *  HICTOP MPX.3 (Extruder, Fan, Bed, Extruder)
 */

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "HICTOP MPX.3"
#endif

// Follow standard RAMPS_14 pin assignment for EFB
#define FET_ORDER_EFB   1

// Set additional pin for E1
#undef MOSFET_D_PIN
#define MOSFET_D_PIN    7            // Pin for E1
#undef HEATER_1_PIN
#define HEATER_1_PIN    MOSFET_D_PIN // E1

// Pin 12 is a DIO pin and can be used for filament runout sensor
#undef SERVO3_PIN
#define SERVO3_PIN      12
#undef FIL_RUNOUT_PIN
#define FIL_RUNOUT_PIN  SERVO3_PIN

// Unsure where the PS_ON pin is, but it isn't pin 12. Disable it for now
#undef PS_ON_PIN
#define PS_ON_PIN       -1

#include "pins_RAMPS.h"
