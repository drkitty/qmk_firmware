#include "planck.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

// Layer names //
enum {
    NON = 0,
    Q_W,
    W_W,
    Q_L,
    W_L,
    NUM,
    EXT,
    NAV,
};

// Macros to make the keymap more visually appealing //
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [NON] = {
    {
      _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
    {
      _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
    {
      _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
    {
      _______, MO(NAV), KC_LALT, KC_LGUI, MO(NUM), KC_SPC ,
      KC_BSPC, MO(NUM), KC_RGUI, KC_RALT, MO(NAV), KC_DEL ,
    },
  },

  [Q_W] = {
    {
      KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,
      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_ENT ,
    },
    {
      KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,
      KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    },
    {
      KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,
      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    },
    {
      KC_LCTL, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
  },

  [W_W] = {
    {
      KC_TAB , KC_Q   , KC_D   , KC_R   , KC_W   , KC_B   ,
      KC_J   , KC_F   , KC_U   , KC_P   , KC_SCLN, KC_ENT ,
    },
    {
      KC_CAPS, KC_A   , KC_S   , KC_H   , KC_T   , KC_G   ,
      KC_Y   , KC_N   , KC_E   , KC_O   , KC_I   , KC_QUOT,
    },
    {
      KC_LSFT, KC_Z   , KC_X   , KC_M   , KC_C   , KC_V   ,
      KC_K   , KC_L   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    },
    {
      KC_LCTL, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
  },

  [Q_L] = {
    {
      KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,
      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_ENT ,
    },
    {
      KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,
      KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
    },
    {
      KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,
      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    },
    {
      KC_ESC , _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
  },

  [W_L] = {
    {
      KC_TAB , KC_Q   , KC_D   , KC_R   , KC_W   , KC_B   ,
      KC_J   , KC_F   , KC_U   , KC_P   , KC_SCLN, KC_ENT ,
    },
    {
      KC_LCTL, KC_A   , KC_S   , KC_H   , KC_T   , KC_G   ,
      KC_Y   , KC_N   , KC_E   , KC_O   , KC_I   , KC_QUOT,
    },
    {
      KC_LSFT, KC_Z   , KC_X   , KC_M   , KC_C   , KC_V   ,
      KC_K   , KC_L   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
    },
    {
      KC_ESC , _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______,
    },
  },

  [NUM] = {
    {
      _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,
      KC_CIRC, KC_AMPR, KC_ASTR, KC_MINS, KC_EQL , _______,
    },
    {
      _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,
      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_ESC ,
    },
    {
      _______, KC_BSLS, KC_PIPE, KC_LPRN, KC_RPRN, KC_LCBR,
      KC_RCBR, KC_LBRC, KC_RBRC, KC_UNDS, KC_PLUS, _______,
    },
    {
      _______, XXXXXXX, _______, _______, _______, _______,
      _______, _______, _______, _______, XXXXXXX, _______,
    },
  },

  [NAV] = {
    {
      _______, KC_GRV , KC_TILD, XXXXXXX, XXXXXXX, DF(Q_W),
      DF(W_W), KC_HOME, KC_PGDN, KC_PGUP, KC_END , _______,
    },
    {
      _______, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, DF(Q_L),
      DF(W_L), KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX,
    },
    {
      _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,
      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , _______,
    },
    {
      _______, _______, _______, _______, XXXXXXX, _______,
      _______, XXXXXXX, _______, _______, _______, RESET  ,
    },
  },
};
