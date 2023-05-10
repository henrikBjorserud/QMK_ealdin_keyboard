/* Copyright 2019 Ealdin
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
// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x14(
    /* Base
      * ,-------------------------------------------------------------------------------------------------.
      * |   `  |   1  |   2  |   3  |   4  |   5  |   -  |   +  |   6  |   7  |   8  |   9  |   0  | Bksp |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * | Tab  |   Q  |   W  |   E  |   R  |   T  |   [  |   ]  |   Y  |   U  |   I  |   O  |   P  | Del  |
      * |------+------+------+------+------+-------------+------+------+------+------+------+------+------|
      * | Esc  |   A  |   S  |   D  |   F  |   G  | Home | PgUp |   H  |   J  |   K  |   L  |   ;  |  "   |
      * |------+------+------+------+------+------|------+------+------+------+------+------+------+------|
      * | Shift|   Z  |   X  |   C  |   V  |   B  | End  | PgDn |   N  |   M  |   ,  |   .  |   /  | Enter|
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * | Ctrl |  GUI | CpsLk|  Alt |  Fn2 | Space| Space| Space| Space|  Fn1 | Left | Down |  Up  | Right|
      * `-------------------------------------------------------------------------------------------------' 
      */
    KC_MUTE, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_HOME, KC_END,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_SLASH, KC_BSLS, KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_ESC,  HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,    KC_LBRC, KC_RBRC, KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
    LSFT(KC_9), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MINS, KC_EQL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   RSFT(KC_0),
    KC_LCTL, KC_LGUI, KC_CAPS, KC_LALT, MO(2),   KC_BSPC, KC_BSPC, KC_SPC,  KC_SPC,  KC_ENT,  LCTL(KC_TAB),   KC_LEFT, KC_DOWN, KC_RGHT
  ),
  

  [2] = LAYOUT_ortho_5x14(
  /* Layer 2 
      * ,-------------------------------------------------------------------------------------------------.
      * |Toggle| Mode+| Mode-| Hue+ | Hue- | Sat+ | Sat- |Value+|Value-|      |      |      |      |      |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * |Static|Breath| Rainb| Swirl| Snake|Knight| Xmas | Grad | Test |      |      |      |      |      |
      * |------+------+------+------+------+-------------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
      * |------+------+------+------+------+------|------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      | Mute |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      | Stop | Play |      |      | Prev | Vol- | Vol+ | Next |
      * `-------------------------------------------------------------------------------------------------' 
      */
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
    RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______, _______, _______, _______,
    KC_DELETE, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE,
    _______,   _______, _______, _______, _______, _______, KC_MSTP, KC_MPLY, _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
  ),
};
