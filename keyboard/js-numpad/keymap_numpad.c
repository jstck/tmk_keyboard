#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP_NUMPAD(NUMLOCK, KP_EQUAL, KP_SLASH, KP_ASTERISK, \
    	          KP_7,    KP_8,     KP_9,     KP_MINUS, \
    	          KP_4,    KP_5,     KP_6,     KP_PLUS, \
    	          KP_1,    KP_2,     KP_3, \
    	          KP_0,              KP_DOT,   KP_ENTER),
};
const action_t PROGMEM fn_actions[] = {};
