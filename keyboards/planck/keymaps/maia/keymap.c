#include "planck.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

// Layer names //
#define BAS 0
#define QWE 1
#define WRK 2
#define NUM 3
#define SYM 4
#define NAV 5

// Macros to make the keymap more visually appealing //
#define _______ KC_TRNS
#define XXXXXXX KC_NO
/*#define LY(layer) ACTION_FUNCTION(layer)*/
#define LY(layer) TO((layer), ON_PRESS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BAS] = {
    {
      KC_TAB , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT ,
    },
    {
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    },
    {
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
    },
    {
      KC_ESC , MO(NAV), KC_LALT, KC_LGUI, MO(NUM), KC_SPC ,
      KC_BSPC, MO(SYM), KC_RGUI, KC_RALT, LY(QWE), LY(WRK),
    },
  },

  [QWE] = {
    {
      _______, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,
      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , _______,
    },
    {
      _______, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,
      KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    },
    {
      _______, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,
      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, _______,
    },
    {
      _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
  },

  [WRK] = {
    {
      _______, KC_Q   , KC_D   , KC_R   , KC_W   , KC_B   ,
      KC_J   , KC_F   , KC_U   , KC_P   , KC_SCLN, _______,
    },
    {
      _______, KC_A   , KC_S   , KC_H   , KC_T   , KC_G   ,
      KC_Y   , KC_N   , KC_E   , KC_O   , KC_I   , KC_QUOT,
    },
    {
      _______, KC_Z   , KC_X   , KC_M   , KC_C   , KC_V   ,
      KC_K   , KC_L   , KC_COMM, KC_DOT , KC_SLSH, _______,
    },
    {
      _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
  },

  [NUM] = {
    {
      _______, XXXXXXX, KC_TILD, KC_GRV , XXXXXXX, XXXXXXX,
      XXXXXXX, KC_MINS, KC_EQL , KC_PLUS, KC_UNDS, _______,
    },
    {
      _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,
      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_ESC ,
    },
    {
      XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,
      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , XXXXXXX,
    },
    {
      _______, XXXXXXX, _______, _______, _______, _______,
      _______, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX,
    },
  },

  [SYM] = {
    {
      _______, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, XXXXXXX,
      XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, _______,
    },
    {
      _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,
      KC_CIRC, KC_AMPR, KC_ASTR, KC_BSLS, KC_PIPE, XXXXXXX,
    },
    {
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    },
    {
      _______, XXXXXXX, _______, _______, XXXXXXX, _______,
      _______, _______, _______, _______, XXXXXXX, XXXXXXX,
    },
  },

  [NAV] = {
    {
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______,
    },
    {
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX,
    },
    {
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, _______,
    },
    {
      _______, _______, _______, _______, XXXXXXX, _______,
      _______, XXXXXXX, _______, _______, XXXXXXX, RESET  ,
    },
  },
};
