#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [0] = LAYOUT_alice(
        KC_ESC,  KC_Q,   KC_W,   KC_E,   KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,       KC_BSPC,
        KC_TAB,  KC_A,   KC_S,   KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_MINS,    KC_ENT,     
        KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,  KC_LSFT,  KC_N,  KC_M,  KC_COMMA,KC_DOT,KC_RSFT,
        KC_SPACE,KC_ESC,KC_LCTL, KC_RGUI, LT(1,KC_SPACE),LT(2,KC_SPACE),KC_LALT,KC_BSPC,KC_LSFT,KC_BSPC
    ),
    [1] = LAYOUT_alice(
        KC_NO,  KC_1,   KC_2,   KC_3,   KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,           KC_NO,
        KC_NO,  KC_A,   KC_S,   KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_ENT,         KC_NO,
        KC_NO,  KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,  KC_LSFT,  KC_N,  KC_M,  KC_COMMA,KC_DOT,    KC_NO,
        KC_NO,  KC_ESC,KC_LCTL,       KC_RGUI, LT(1,KC_SPACE),LT(2,KC_SPACE),KC_LALT,KC_BSPC,KC_LSFT,KC_NO
    ),
    [2] = LAYOUT_alice(
        KC_NO,  KC_1,   KC_2,   KC_3,   KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,       KC_NO,
        KC_NO,  KC_A,   KC_S,   KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_ENT,     KC_NO,
        KC_NO,  KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,  KC_LSFT,  KC_N,  KC_M,  KC_COMMA,KC_DOT,KC_NO,
        KC_NO,  KC_ESC,KC_LCTL,       KC_RGUI, LT(1,KC_SPACE),LT(2,KC_SPACE),KC_LALT,KC_BSPC,KC_LSFT,KC_NO
    ),
    [3] = LAYOUT_alice(
        KC_NO,  KC_1,   KC_2,   KC_3,   KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,       KC_NO,
        KC_NO,  KC_A,   KC_S,   KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_ENT,     KC_NO,
        KC_NO,  KC_Z,   KC_X,   KC_C,   KC_V,  KC_B,  KC_LSFT,  KC_N,  KC_M,  KC_COMMA,KC_DOT,KC_NO,
        KC_NO,  KC_ESC,KC_LCTL,       KC_RGUI, LT(1,KC_SPACE),LT(2,KC_SPACE),KC_LALT,KC_BSPC,KC_LSFT,KC_NO
    )
};
