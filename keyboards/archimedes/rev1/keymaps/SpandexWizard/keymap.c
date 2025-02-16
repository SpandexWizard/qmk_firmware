/*
Copyright 2023 SpandexWizard

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

#include QMK_KEYBOARD_H

#define _BASE 0
#define _NUMBERPAD 1
#define _FKEYS 2
#define _MOUSEKEYS 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_split_3x6_4(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
					KC_BACKSLASH, KC_HOME, KC_BSPC, KC_ESC,

		KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LEFT_BRACKET,
		KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RIGHT_BRACKET,
		KC_END, TG(_NUMBERPAD), KC_ENT,  KC_SPC
    ),
	[_NUMBERPAD] = LAYOUT_split_3x6_4(
		_______, KC_GRAVE, KC_UP,_______,_______,_______,
		_______, KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,
		_______,_______,_______,_______,_______,KC_BACKSLASH,
						TO(_BASE),_______,_______,_______,

		KC_KP_SLASH, KC_P7, KC_P8, KC_P9, KC_PPLS,_______,
		_______,     KC_P4, KC_P5, KC_P6, KC_PMNS,_______,
		_______,	 KC_P1, KC_P2, KC_P3, KC_PENT,_______,
		_______,TG(_FKEYS),_______,_______
	),
	[_FKEYS] = LAYOUT_split_3x6_4(
		KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,
		_______,_______,_______,_______,_______,_______,
		_______,_______,_______,_______,_______,_______,
						_______,_______,_______,_______,

		KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11, KC_F12,
		_______,_______,_______,_______,_______,_______,
		_______,_______,_______,_______,_______,_______,
		_______,_______,_______,_______
	),
	[_MOUSEKEYS] = LAYOUT_split_3x6_4(
		_______,_______,_______,_______,_______,_______,
		_______,_______,_______,_______,_______,_______,
		_______,_______,_______,_______,_______,_______,
						_______,_______,_______,_______,

		_______,_______,_______,_______,_______,_______,
		_______, KC_MS_BTN1,KC_MS_BTN2,_______,_______,_______,
		_______,_______,_______,_______,_______,_______,
		_______,_______,_______,_______
	)

};
