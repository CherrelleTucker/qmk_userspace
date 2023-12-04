#include QMK_KEYBOARD_H 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // qwerty
  [0] = LAYOUT_split_3x6_3(
    DF(1),          LT(0, KC_Q),        LT(0, KC_W),         LT(0, KC_E),        LT(0, KC_R),         LT(0, KC_T),                       LT(0, KC_Y),      LT(0, KC_U),         LT(0, KC_I),        LT(0, KC_O),          LT(0, KC_P),     DF(2),
    KC_BSPC,        MT(MOD_LGUI, KC_A), MT(MOD_LSFT, KC_S),  MT(MOD_LALT, KC_D), MT(MOD_LCTL, KC_F),  KC_G,                              KC_H,             MT(MOD_RCTL, KC_J),  MT(MOD_RALT, KC_K), MT(MOD_RSFT, KC_L),   LT(0, KC_QUOTE), LT(0, KC_COLON),
    CW_TOGG,        LT(0, KC_Z),        LT(0, KC_X),         LT(0, KC_C),        LT(0, KC_V),         KC_B,                              KC_N,             KC_M,                KC_COMMA,           KC_DOT,               LT(0, KC_QUES),  KC_SLASH,
                                                             KC_ESCAPE,          LT(4,KC_BSPC),       LT(5,KC_TAB),                      LT(5,KC_ENTER),   LT(3,KC_SPACE),      KC_ESCAPE
  ),
  // colemak alpha
  [1] = LAYOUT_split_3x6_3(
    DF(0),          LT(1, KC_Q),         LT(1, KC_W),        LT(1, KC_F),        LT(1, KC_P),         LT(1, KC_B),                       LT(1, KC_J),      LT(1, KC_L),         LT(1, KC_U),         LT(1, KC_Y),         LT(1, KC_QUOTE), DF(2),
    KC_TRNS,        KC_A,                MT(MOD_LSFT, KC_R), KC_S,               KC_T,                KC_G,                              KC_M,             KC_N,                KC_E,                MT(MOD_RSFT, KC_I),  KC_O,            LT(1, KC_COLON),
    KC_TRNS,        KC_Z,                KC_X,               KC_C,               KC_D,                KC_V,                              KC_K,             KC_H,                KC_COMMA,            KC_DOT,              LT(1, KC_QUES),  KC_SLASH,
                                                             KC_ESCAPE,          LT(4,KC_BSPC),       LT(5,KC_TAB),                      LT(5,KC_ENTER),   LT(3,KC_SPACE),      KC_ESCAPE
  ),
  // colemak full    
  [2] = LAYOUT_split_3x6_3(
    DF(0),          KC_Q,                KC_W,               KC_F,               KC_P,                KC_B,                              KC_J,             KC_L,                KC_U,                KC_Y,                KC_QUOTE,        DF(2),
    KC_TRNS,        KC_A,                MT(MOD_LSFT, KC_R), KC_S,               KC_T,                KC_G,                              KC_M,             KC_N,                KC_E,                MT(MOD_RSFT, KC_I),  KC_O,            LT(1, KC_COLON),
    KC_TRNS,        LT(1, KC_Z),        LT(1, KC_X),         LT(1, KC_C),        LT(1, KC_D),         KC_V,                              KC_K,             KC_H,                KC_COMMA,            KC_DOT,              LT(1, KC_QUES),  KC_SLASH,
                                                             KC_ESCAPE,          LT(4,KC_BSPC),       LT(5,KC_TAB),                      LT(5,KC_ENTER),   LT(3,KC_SPACE),      KC_ESCAPE
  ),
  // arrows
  [3] = LAYOUT_split_3x6_3(
    KC_TRNS,        KC_TRNS,             KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,                           KC_TRNS,          KC_AUDIO_VOL_DOWN,   KC_UP,               KC_AUDIO_VOL_UP,     KC_AUDIO_MUTE,   KC_TRNS,
    KC_TRNS,        KC_LEFT_GUI,         KC_LEFT_SHIFT,      KC_LEFT_ALT,        KC_LEFT_CTRL,       KC_TAB,                            LSFT(KC_TAB),     KC_LEFT,             KC_DOWN,             KC_RIGHT,            KC_TRNS,         KC_TRNS,
    KC_TRNS,        LCTL(KC_Z),          LCTL(KC_X),         LCTL(KC_C),         KC_TRNS,            KC_TRNS,                           KC_TRNS,          KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_TRNS,         KC_TRNS,
                                                             KC_TRNS,            KC_TRNS,            KC_TRNS,                           KC_TRNS,          KC_TRNS,             KC_TRNS
  ),
  // numbers
  [4] = LAYOUT_split_3x6_3(
    KC_TRNS,        KC_TRNS,             KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,                           KC_UP,            KC_7,                KC_8,                KC_9,                KC_KP_MINUS,     KC_ASTR,
    KC_TRNS,        KC_LEFT_GUI,         KC_LEFT_SHIFT,      KC_LEFT_ALT,        KC_LEFT_CTRL,       KC_TAB,                            KC_DOWN,          KC_4,                KC_5,                KC_6,                KC_KP_PLUS,      KC_TRNS,
    KC_TRNS,        KC_TRNS,             KC_TRNS,            KC_TRNS,            KC_ENTER,           KC_ESCAPE,                         KC_TRNS,          KC_1,                KC_2,                KC_3,                KC_KP_SLASH,     KC_TRNS,
                                                             KC_TRNS,            KC_TRNS,            KC_TRNS,                           KC_TRNS,          KC_KP_0,             KC_KP_DOT
  ),
  // symbols
  [5] = LAYOUT_split_3x6_3(
    KC_TRNS,        KC_TRNS,            KC_TRNS,             KC_TRNS,            KC_TRNS,             KC_TRNS,                           KC_TRNS,          KC_LPRN,             KC_RPRN,             KC_ASTR,             KC_PLUS,        KC_TRNS,
    KC_TRNS,        KC_GRAVE,           KC_TILD,             KC_PERC,            KC_TAB,              LSFT(KC_TAB),                      KC_TRNS,          KC_LCBR,             KC_RCBR,             KC_EQUAL,            KC_COLN,        KC_TRNS,
    KC_TRNS,        KC_TRNS,            KC_BSLS,             KC_PIPE,            KC_TRNS,             KC_TRNS,                           KC_TRNS,          KC_LBRC,             KC_RBRC,             KC_CIRC,             KC_SCLN,        KC_TRNS,
                                                             KC_TRNS,            KC_TRNS,             KC_TRNS,                           KC_TRNS,          KC_TRNS,             KC_TRNS
  ),
};

// Define a structure to map keycodes to long press codes
typedef struct {
    uint16_t keycode;
    uint16_t long_press;
} keycode_map_t;

// This is where we edit which key has which longpress
const keycode_map_t keycode_mappings[] = {
// QWERTY
    // top row
    { LT(0, KC_Q), KC_EXCLAIM },
    { LT(0, KC_W), KC_AT },
    { LT(0, KC_E), KC_HASH },
    { LT(0, KC_R), KC_DOLLAR },
    { LT(0, KC_T), KC_PERCENT },
    { LT(0, KC_Y), KC_ASTERISK },
    { LT(0, KC_U), KC_LEFT_PAREN },
    { LT(0, KC_I), KC_UNDERSCORE },
    { LT(0, KC_O), KC_MINUS },
    { LT(0, KC_P), KC_EQUAL },
    // middle row
    { LT(0, KC_QUOTE), KC_SEMICOLON },
    { LT(0, KC_COLON), KC_SEMICOLON },
    // bottom row
    { LT(0, KC_Z), C(KC_Z) },
    { LT(0, KC_X), C(KC_X) },
    { LT(0, KC_C), C(KC_C) },
    { LT(0, KC_V), C(KC_V) },
    { LT(0, KC_QUES), KC_SLASH },   
// COLEMAK
    // top row 
    { LT(1, KC_Q), KC_EXCLAIM },
    { LT(1, KC_W), KC_AT },
    { LT(1, KC_F), KC_HASH },
    { LT(1, KC_P), KC_DOLLAR },
    { LT(1, KC_B), KC_PERCENT },
    { LT(1, KC_J), KC_ASTERISK },
    { LT(1, KC_L), KC_LEFT_PAREN },
    { LT(1, KC_U), KC_UNDERSCORE },
    { LT(1, KC_Y), KC_MINUS },
    { LT(1, KC_QUOTE), KC_EQUAL },
    // middle row
    { LT(1, KC_COLON), KC_SEMICOLON },
    // bottom row
    { LT(1, KC_Z), C(KC_Z) },
    { LT(1, KC_X), C(KC_X) },
    { LT(1, KC_C), C(KC_C) },
    { LT(1, KC_D), C(KC_V) },
    { LT(1, KC_QUES), KC_SLASH },   
};

// this function is intercepting keypresses and comparing against the longpress mapping
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    for (int i = 0; i < sizeof(keycode_mappings) / sizeof(keycode_map_t); i++) {
        if (keycode == keycode_mappings[i].keycode) {
            if (!record->tap.count && record->event.pressed) {
                tap_code16(keycode_mappings[i].long_press);
                return false;
            }
            return true;
        }
    }
    return true;
}
