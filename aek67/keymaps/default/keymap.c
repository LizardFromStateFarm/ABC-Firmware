/* Copyright 2020 masterzen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
    BASE,  // qwerty
    _FL,   // function key layer
};

/*
 * ,---------------------------------------------------------------------|
 * |`  |1  |2  |3  |4  |5  |6  |7  |8  |9  |0   |-   |=  |Backspace| PgUp|
 * |---------------------------------------------------------------------|
 * |Tab  |Q  |W  |E  |R  |T  |Y  |U  |I  |O  |P  |[  | ]  |   \     |PgDn|
 * |---------------------------------------------------------------------|
 * |Caps  |A  |S  |D  |F  |G  |H  |J  |K  |L  |;  |'  |  Enter     | Ins |
 * |---------------------------------------------------------------------|
 * |Shft    |Z  |X  |C  |V  |B  |N  |M  |,  |.  |/  |Shift       |Up| Del|
 * |---------------------------------------------------------------------|
 * |Ctrl|GUI |Alt |     Space                    |Alt |Fn  |  Lt |Dn |Rt |
 * `---------------------------------------------------------------------|'
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_67_ansi(
        KC_ESC, KC_1,   KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_MINS, KC_EQL,  KC_BSPC, KC_PGUP,
        KC_TAB, KC_A,   KC_B,  KC_C,  KC_D,  KC_E,  KC_F,  KC_G,  KC_H,  KC_I,  KC_J, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGDN,
        KC_CAPS, KC_K,  KC_L,  KC_M,  KC_N,  KC_O,  KC_P,  KC_Q,  KC_R,  KC_S,  KC_SCLN,  KC_QUOT,        KC_ENT, KC_INS,
        KC_LSFT, KC_T,  KC_U,  KC_V,  KC_W,  KC_X,  KC_Y,  KC_Z, KC_COMM, KC_DOT,KC_SLSH,         KC_RSFT, KC_UP, KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT,                  KC_SPC,                      KC_RALT, MO(_FL), KC_LEFT, KC_DOWN, KC_RGHT),

    [_FL] = LAYOUT_67_ansi(
        KC_GRV,  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_F13,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_END,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU,_______,
        _______, _______, _______,                   _______,                            _______, MO(_FL), KC_BRID, KC_VOLD, KC_BRIU),
};

