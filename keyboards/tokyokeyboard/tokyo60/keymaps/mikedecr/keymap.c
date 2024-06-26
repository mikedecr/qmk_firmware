#include QMK_KEYBOARD_H

#define BL 0
#define FN 1
#define NUMS 2
/*
 * Default HHKB Layout
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │  \  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BkSpc│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│EsCtl│  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │█████│Enter│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Shift│█████│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │█████│Shift│ Fn  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│ Alt │ Gui │█████│█████│Space│█████│█████│█████│█████│█████│ Gui │ Alt │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
[BL] = LAYOUT_60_hhkb(
        KC_LGUI,    KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,    KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSPC,
        LCTL_T(KC_ESC),  KC_A,    KC_S,   KC_D,   LT(FN, KC_F),   KC_G,   KC_H,   LT(FN, KC_J),   KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT,
        KC_LSFT,            KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM,  KC_DOT, KC_SLSH,      KC_RSFT, MO(FN),
             KC_LALT, KC_LCTL,              LT(NUMS, KC_SPC),                         KC_RGUI, KC_RALT ),
    /* 1: HHKB Fn layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│     │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │ Ins │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Esc  │ RGB │RGBfw│RGBrv│BLtog│BLstp│     │     │ Up  │ Slk │ Pus │     │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │ VoD │ VoU │ Mut │ Ejc │     │Home │Left │Down │Right│ End │     │█████│NPEnt│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │█████│     │     │     │     │     │ End │PgUp │PgDwn│     │     │█████│     │Caps │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│     │     │█████│█████│█████│     │█████│█████│█████│█████│     │     │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
[FN] = LAYOUT_60_hhkb(
       KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_INS,  KC_TRNS,
       KC_ESC, RGB_TOG, RGB_MOD, RGB_RMOD, BL_TOGG, BL_STEP, KC_TRNS, KC_HOME, KC_TRNS,   KC_END, KC_MINS, KC_PAUS, KC_TRNS, KC_DEL,
       KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE,  KC_EJCT, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,  KC_TRNS,           KC_PENT,
       KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_EQL, KC_PGUP, KC_PGDN,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_CAPS,
             KC_TRNS, KC_TRNS,                   KC_TRNS,                         KC_TRNS, KC_TRNS
     ),

[NUMS] = LAYOUT_60_hhkb(
        // fn row
        KC_TRNS,  KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_TRNS,  KC_TRNS,
        // another fn row?
        KC_TRNS,  KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_TRNS,
        // number row
        KC_TRNS,  KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,     KC_TRNS, KC_PENT,
        // misc layer keys
        //                                                      -/_
        KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS
     ),
};
