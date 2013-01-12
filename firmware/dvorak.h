#define KEY_LAYOUT		0

const uint8_t layer2[KEYS] = {
	//ROW0				ROW1				ROW2			ROW3			ROW4
	KEY_ESC,			KEY_LAYER1,			KEY_BACKSPACE,	KEY_TAB,		KEY_TILDE,		// COL0
	KEY_ALT_TAB,		KEY_SEMICOLON,		KEY_A,			KEY_QUOTE,		KEY_1,			// COL1
	KEY_ENTER,			KEY_Q,				KEY_O,			KEY_COMMA,		KEY_2,			// COL2
	KEY_ALT|KEY_MOD,	KEY_J,				KEY_E,			KEY_PERIOD,		KEY_3,			// COL3
	KEY_CTRL|KEY_MOD,	KEY_K,				KEY_U,			KEY_P,			KEY_4,			// COL4
	KEY_SHIFT|KEY_MOD,	KEY_X,				KEY_I,			KEY_Y,			KEY_5,			// COL5
	KEY_SPACE,			KEY_B,				KEY_D,			KEY_F,			KEY_6,			// COL6 
	KEY_FN,				KEY_M,				KEY_H,			KEY_G,			KEY_7,			// COL7
	KEY_RIGHT_ALT|KEY_MOD,KEY_W,			KEY_T,			KEY_C,			KEY_8,			// COL8
	KEY_BACKSLASH,		KEY_V,				KEY_N,			KEY_R,			KEY_9,			// COL9
	KEY_EQUAL,			KEY_Z,				KEY_S,			KEY_L,			KEY_0,			// COL10
	KEY_RIGHT_BRACE,	KEY_LAYER2,			KEY_MINUS,		KEY_SLASH,		KEY_LEFT_BRACE	// COL11
};