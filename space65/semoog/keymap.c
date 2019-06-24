/*
 * semoog's keymap for Gray Studio Space65
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Win */

	[0] = LAYOUT( \
          KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,    KC_BSPC,    KC_BSPC,    KC_GRV, \
          KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,    KC_RBRC,   KC_BSLS,    KC_DEL,             \
          KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,                KC_PGUP,            \
          KC_LSFT,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_LSFT,   KC_UP,      KC_PGDN,            \
          KC_LCTL,   KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,           KC_LGUI, MO(1),      KC_LEFT,   KC_DOWN,    KC_RGHT),

	[1] = LAYOUT( \
          RESET,     TG(2),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SLCK,    KC_PAUS,   KC_NO,      KC_NO,      KC_NO,  \
          KC_NO,     KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_SPI, RGB_SPD, RGB_HUI,    RGB_HUD,   KC_NO,      RGB_TOG,            \
          KC_TRNS,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_M_K, KC_NO,   RGB_VAI, RGB_VAD,    KC_NO,                 RGB_MOD,            \
          KC_TRNS,   KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MPLY,    KC_TRNS,   KC_VOLU,    RGB_RMOD,           \
          KC_NO,     KC_NO,   KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,   KC_TRNS,    KC_MPRV,   KC_VOLD,    KC_MNXT),

  /* Mac */

	[2] = LAYOUT( \
          KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,    KC_BSPC,    KC_BSPC,   KC__MUTE,\
          KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,    KC_RBRC,   KC_BSLS,    KC_DEL,             \
          KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,                KC_PGUP,            \
          KC_LSPO,   KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_RSPC,   KC_UP,      KC_PGDN,            \
          KC_LCTL,   KC_LALT, KC_LGUI,          LT(4,KC_SPC),     LT(4,KC_SPC),     LT(4, KC_SPC),    KC_RGUI, MO(3),      KC_LEFT,   KC_DOWN,    KC_RGHT),

	[3] = LAYOUT( \
          KC_NO,     TG(2),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SLCK,    KC__MUTE,  KC_NO,      KC_NO,     KC_NO,   \
          KC_NO,     KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_SPI, RGB_SPD, RGB_HUI,    RGB_HUD,   KC_NO,      RGB_TOG,            \
          KC_TRNS,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_M_K, KC_NO,   RGB_VAI, RGB_VAD,    KC_NO,                 RGB_MOD,            \
          KC_TRNS,   KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MPLY,    KC_TRNS,   KC__VOLUP,  RGB_RMOD,           \
          KC_NO,     KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_TRNS,    KC_MRWD,   KC__VOLDOWN,KC_MFFD),

	[4] = LAYOUT( \
          KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,     KC_NO,      KC_NO,     KC_NO,   \
          KC_NO,     KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,     KC_NO,      KC_NO,              \
          KC_TRNS,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_NO,      KC_NO,                 KC_NO,              \
          KC_TRNS,   KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_TRNS,   KC__VOLUP,  KC_NO,              \
          KC_NO,     KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_TRNS,    KC_NO,     KC__VOLDOWN,KC_NO)
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
