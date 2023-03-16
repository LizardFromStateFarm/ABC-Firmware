/*
Copyright 2020 masterzen

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#define VENDOR_ID 0x1432
#define PRODUCT_ID 0x5678
#define DEVICE_VER 0x0001
#define MANUFACTURER "Austin"
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/*
 * Keyboard Matrix Assignments
 */
#define MATRIX_ROW_PINS { F4, F1, F0, E6, F7 }
#define MATRIX_COL_PINS { B4, B5, B6, C6, C7, F6, F5, B0, D1, D2, D3, D5, D4, D6, D7 }

 /* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW
