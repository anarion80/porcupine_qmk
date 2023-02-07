/*

╭━╮╱╱╱╱╱╱╱╱╱╭╮
┃╋┣━┳┳┳━┳┳┳━╋╋━┳┳━╮
┃╭┫╋┃╭┫━┫┃┃╋┃┃┃┃┃┻┫
╰╯╰━┻╯╰━┻━┫╭┻┻┻━┻━╯
╱╱╱╱╱╱╱╱╱╱╰╯

*/

#include QMK_KEYBOARD_H

enum porcupine_layers {
    _QWERTY,
    _NAV,
    _SYMBOL,
    _FUNCTION,
};

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                                              │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
    ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

    ┌───────────────────────────────────────────────────────────┐
    │ q w e r t y  -  b a s e  l a y e r                        │
    └───────────────────────────────────────────────────────────┘
    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    │         │    Q    │    W    │    E    │    R    │    T    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    Y    │    U    │    I    │    O    │    P    │         │
    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    │         │    A    │    S    │    D    │    F    │    G    ├─╯                ╰─┤    H    │    J    │    K    │    L    │    ;    │         │
    └─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┘
              │    Z    │    X    │    C    │    V    │    B    │                    │    N    │    M    │    ,    │    .    │    /    │
              └─────────┴─────────┼─────────┼─────────┼─────────┼─────────┐┌─────────┼─────────┼─────────┼─────────┼─────────┴─────────┘
                                  │         │  SHIFT  │ BSPACE  │  SPACE  ││  ENTER  │  CTRL   │ LAYER2  │         │
                                  └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘                            */

    [_QWERTY] = LAYOUT_5x3_3(
            //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷
                        KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                          KC_Y,     KC_U,     KC_I,      KC_O,     KC_P,
                        KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                          KC_H,     KC_J,     KC_K,      KC_L,   KC_SCLN,
                        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                          KC_N,     KC_M,    KC_COMM,   KC_DOT,  KC_SLSH,
                                                KC_LSFT,  KC_BSPC,   KC_SPC,    KC_ENTER,  KC_RCTL,  TO(_NAV)
    ),
/*
    ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

    ┌───────────────────────────────────────────────────────────┐
    │ n a v i g a t i o n                                       │
    └───────────────────────────────────────────────────────────┘
    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    │         │   ESC   │    W←   │    M↑   │   W→    │   PG↑   │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │ N. TAB  │   BACK  │    ↑    │   FWD   │  BSPACE │         │
    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    │         │   TAB   │    M←   │    M↓   │   M→    │    G    ├─╯                ╰─┤ P. TAB  │    ←    │    ↓    │    →    │  ENTER  │         │
    └─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┘
              │  LCTRL  │    W↑   │    W↓   │  RCLICK │   PG↓   │                    │ LCLICK  │   HOME  │   INS   │   END   │  LAYER4 │
              └─────────┴─────────┼─────────┼─────────┼─────────┼─────────┐┌─────────┼─────────┼─────────┼─────────┼─────────┴─────────┘
                                  │         │ LAYER1  │ LSHIFT  │  SPACE  ││  ENTER  │  LALT   │ LAYER3  │         │
                                  └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘                            */

    [_NAV] = LAYOUT_5x3_3(
            //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷
                        KC_ESC,   KC_MS_WH_LEFT,  KC_MS_UP,   KC_MS_WH_RIGHT,  KC_PGUP,      LCTL(LSFT(KC_TAB)), LALT(KC_LEFT),  KC_UP,   LALT(KC_RIGHT),  KC_BSPC,
                        KC_TAB,   KC_MS_LEFT,     KC_MS_DOWN, KC_MS_RIGHT,    MT(MOD_LGUI,KC_DEL),            RCTL(KC_TAB),   KC_LEFT,   KC_DOWN, KC_RIGHT,   KC_ENTER,
                        OSM(MOD_LCTL),   KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN2, KC_PGDN,                  KC_MS_BTN1,  KC_HOME,   KC_INS,   KC_END, TO(_FUNCTION),
                                                TO(_QWERTY),  KC_LSFT,   KC_SPC,    KC_ENTER,  KC_LALT,  TO(_SYMBOL)
    ),

/*
    ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

    ┌───────────────────────────────────────────────────────────┐
    │ s y m b o l s                                             │
    └───────────────────────────────────────────────────────────┘
    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    │         │   ESC   │    `    │    '    │    "    │    +    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    -    │    7    │    8    │    9    │  BSPACE │         │
    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    │         │   TAB   │    \    │    {    │    }    │    |    ├─╯                ╰─┤    =    │    4    │    5    │    6    │  ENTER  │         │
    └─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┘
              │    ~    │    [    │    (    │    )    │    ]    │                    │    0    │    1    │    2    │    3    │   DEL   │
              └─────────┴─────────┼─────────┼─────────┼─────────┼─────────┐┌─────────┼─────────┼─────────┼─────────┼─────────┴─────────┘
                                  │         │ LAYER1  │ LSHIFT  │  SPACE  ││  ENTER  │  LALT   │  RCTRL  │         │
                                  └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘                            */

    [_SYMBOL] = LAYOUT_5x3_3(
            //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷
                    KC_ESC,     KC_GRAVE,   KC_QUOT,   KC_DQUO,     LSFT(KC_EQL),                       KC_MINS,    KC_7,   KC_8,   KC_9,   KC_BSPC,
                    KC_TAB,     KC_BSLS,   LSFT(KC_LBRC),  LSFT(KC_RBRC),  KC_PIPE,                   KC_EQL, KC_4,   KC_5,   KC_6,   KC_ENTER,
                    KC_TILD,    KC_LBRC,    KC_LPRN,    KC_RPRN,   KC_RBRC,                                     KC_0,   KC_1,   KC_2,   KC_3,   KC_DELETE,
                                                TO(_QWERTY),  KC_BSPC,   KC_SPC,    KC_ENTER,  KC_LALT,  OSM(MOD_RCTL)
    ),

    /*
    ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

    ┌───────────────────────────────────────────────────────────┐
    │ f u n c t i o n  +  a u d i o                             │
    └───────────────────────────────────────────────────────────┘
    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    │         │   ESC   │ PLY/PSE │   PREV  │   NEXT  │ P.SCREEN│ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    F9   │   F10   │   F11   │   F12   │  BSPACE │         │
    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    │         │   TAB   │  MUTE   │   VOL↓  │   VOL↑  │  PAUSE  ├─╯                ╰─┤    F5   │   F6    │   F7    │   F8    │  ENTER  │         │
    └─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┘
              │  CAPS   │    *    │    *↓   │    *↑   │  RESET  │                    │    F1   │   F2    │   F3    │   F4    │  DEL    │
              └─────────┴─────────┼─────────┼─────────┼─────────┼─────────┐┌─────────┼─────────┼─────────┼─────────┼─────────┴─────────┘
                                  │         │ LAYER1  │ LSHIFT  │  SPACE  ││  ENTER  │  LALT   │  RCTRL  │         │
                                  └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘                            */

    [_FUNCTION] = LAYOUT_5x3_3(
            //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷
                    KC_ESC,     KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_PREV_TRACK,    KC_MEDIA_NEXT_TRACK,    KC_PSCR,      KC_F9,  KC_F10,  KC_F11,    KC_F12,  KC_BSPC,
                    KC_TAB,     KC_MUTE,    KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,    KC_PAUS,                                KC_F5,  KC_F6,   KC_F7,     KC_F8,   KC_ENTER,
                    KC_CAPS,    KC_KP_ASTERISK, KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP,   /*TD(RESET_MCU)*/ QK_BOOT,         KC_F1,  KC_F2,   KC_F3,     KC_F4,   KC_DELETE,
                                                TO(_QWERTY),  KC_BSPC,   KC_SPC,    KC_ENTER,   KC_LALT,  OSM(MOD_RCTL)
    ),
};

// ┌───────────────────────────────────────────────────────────┐
// │ d e b u g                                                 │
// └───────────────────────────────────────────────────────────┘


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
  return true;
}
