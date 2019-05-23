#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11,   F12, \
    	   NONUS_BSLASH, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINUS, EQUAL, BSPACE, \
           TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRACKET, RBRACKET, \
           CAPS,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCOLON, QUOTE, BSLASH,  ENTER,  \
 LSHIFT,GRAVE,  Z,   X,   C,   V,   B,   N,   M,   COMMA,DOT, SLASH, RSHIFT, \
           LCTRL,LALT,LGUI,          SPACE,                     RGUI,RALT,RCTRL, \
           PSCREEN, SCROLLLOCK, PAUSE, INSERT, HOME, PGUP, DELETE, END, PGDOWN, UP, LEFT, DOWN, RIGHT)
};
const action_t PROGMEM fn_actions[] = {};
