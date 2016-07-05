/*
Copyright 2016 Fred Sundvik <fsundvik@gmail.com>
Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define _BASE 0
#define _SHIFT_L 1
#define _SHIFT_R 2
#define _NRS_L 4
#define _NRS_R 5
#define _NRS 6
#define _FUNC 7
#define _NAV_L 8
#define _NAV_R 9

#define _QWERTY 10

#define _SP_LSHIFT 20
#define _SP_RSHIFT 21
#define _SP_LCTRL 22
#define _SP_RCTRL 23
#define _SP_LALT 24
#define _SP_RALT 25
#define _SP_LGUI 26
#define _SP_RGUI 27

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Qwerty
	[_QWERTY]= KEYMAP(
		// left hand
		EQL, 1,   2,   3,   4,   5,   ESC,
		LBRC,Q,   W,   E,   R,   T,   NO,
		GRV, A,   S,   D,   F,   G,
		CAPS,Z,   X,   C,   V,   B,   NO,
		LCTL,LGUI, LEFT,RGHT,SPC,
									  LCTL,LALT,
										   HOME,
								 SPC,DEL, END,
		// right hand
			 NO, 6,   7,   8,   9,   0,   MINS,
			 LBRC,Y,   U,   I,   O,   P,   RBRC,
				  H,   J,   K,   L,   SCLN,QUOT,
			 NO, N,   M,   COMM,DOT, SLSH,BSLS,
					   ENT,UP,DOWN,  RGUI,RCTL,
		RALT,RCTL,
		PGUP,
		PGDN,BSPC, ENT
    ),
    // Base
	[_BASE]= KEYMAP(
		// left hand
		EQL, 1,   2,   3,   4,   5,   BTLD,
		FN5,Q,   W,   E,   R,   T,   NO,
		FN9, A,   S,   D,   F,   G,
		FN2,Z,   X,   C,   V,   B,   NO,
		LCTL,LGUI, LEFT,FN6,SPC,
									  LCTL,LALT,
										   HOME,
								 SPC,DEL, END,
		// right hand
			 BTLD, 6,   7,   8,   9,   0,   MINS,
			 LBRC,Y,   U,   I,   O,   P,   FN4,
				  H,   J,   K,   L,   SCLN,FN8,
			 FN0, N,   M,   COMM,DOT, SLSH,FN1,
			 	 	 	ENT,FN7,DOWN,  RGUI,RCTL,
		RALT,RCTL,
		PGUP,
		PGDN,BSPC, ENT
	),

	// Shift left side
	[_SHIFT_L] = KEYMAP(
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        LBRC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        GRV,TRNS,TRNS,TRNS,TRNS,TRNS,
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,
                  FN27,FN24,FN23,FN21,TRNS,QUOT,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    // Shift right side
	[_SHIFT_R] = KEYMAP(
		// left hand
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		LBRC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		GRV,TRNS,FN20,FN22,FN24,FN26,
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,TRNS,TRNS,TRNS,
									  TRNS,TRNS,
										   TRNS,
								 TRNS,TRNS,TRNS,
		// right hand
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,
				  TRNS,TRNS,TRNS,TRNS,TRNS,QUOT,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSLS,
					   TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,
		TRNS,
		TRNS,TRNS,TRNS
	),

	// Numbers left side
	[_NRS_L] = KEYMAP(
		// left hand
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		F1,F2,F3,F4,F5,F6,TRNS,
		1,2,3,4,5,6,
		P1,P2,P3,P4,P5,P6,P7,
		TRNS,TRNS,TRNS,TRNS,TRNS,
									  TRNS,TRNS,
										   TRNS,
								 TRNS,TRNS,TRNS,
		// right hand
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
				  FN27,FN24,FN23,FN21,TRNS,QUOT,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSLS,
					   TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,
		TRNS,
		TRNS,TRNS,TRNS
	),

	// Numbers right side
	[_NRS_R] = KEYMAP(
		// left hand
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		GRV,TRNS,FN20,FN22,FN24,FN26,
		CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,TRNS,TRNS,TRNS,
									  TRNS,TRNS,
										   TRNS,
								 TRNS,TRNS,TRNS,
		// right hand
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
			 TRNS,F7,F8,F9,F10,F11,F12,
				  7,8,9,0,MINS,EQL,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSLS,
					   TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,
		TRNS,
		TRNS,TRNS,TRNS
	),

	// Functions
	[_FUNC] = KEYMAP(
		// left hand
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		F1,F2,F3,F4,F5,F6,TRNS,
		F7,F8,F9,F10,F11,F12,
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,TRNS,TRNS,TRNS,
									  TRNS,TRNS,
										   TRNS,
								 TRNS,TRNS,TRNS,
		// right hand
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
				  FN27,FN24,FN23,FN21,TRNS,TRNS,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
					   TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,
		TRNS,
		TRNS,TRNS,TRNS
	),


	// Numbers
	[_NRS] = KEYMAP(
		// left hand
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,FN20,FN22,FN24,FN26,
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,TRNS,TRNS,TRNS,
									  TRNS,TRNS,
										   TRNS,
								 TRNS,TRNS,TRNS,
		// right hand
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
			 TRNS,1,2,3,4,5,6,
				  7,8,9,0,MINS,EQL,
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
					   TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,
		TRNS,
		TRNS,TRNS,TRNS
	),



	// Navigation left side (mouse controls)
	[_NAV_L] = KEYMAP(
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        BTN3,BTN2,WH_L,MS_U,WH_R,WH_U,TRNS,
        TAB,BTN1,MS_L,MS_D,MS_R,WH_D,
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,
                  FN27,FN24,FN23,FN21,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BSLS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    // Navigation right side (arrows)
	[_NAV_R] = KEYMAP(
		// left hand
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		LBRC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,FN20,FN22,FN24,FN26,
		CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,TRNS,TRNS,TRNS,
									  TRNS,TRNS,
										   TRNS,
								 TRNS,TRNS,TRNS,
		// right hand
			 TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
			 TRNS,ESC,HOME,UP,END,PGUP,DEL,
				  INS,LEFT,DOWN,RIGHT,PGDN,BSPC,
			 TRNS,TRNS,PSCR,SLCK,PAUS,APP,BSLS,
					   TRNS,TRNS,TRNS,TRNS,TRNS,
		TRNS,TRNS,
		TRNS,
		TRNS,TRNS,TRNS
	),

};
static uint8_t activeMod=0;
static uint8_t specialModActive=0;
static uint8_t specialModCount = 0;

static void handle_layer(uint8_t layer, keyrecord_t *record) {
	if (record->event.pressed) {
		dprintf("Activating layer: %d \n", layer);
		layer_on(layer);
	} else {
		if (record->tap.count == 0 || record->tap.interrupted) {
			dprintln("No tap");
			clear_mods();
			clear_keys();
			send_keyboard_report();
		} else {
			dprintln("tapped");
			uint8_t keycode = keymap_key_to_keycode(_QWERTY, record->event.key);
			add_key(keycode);
			send_keyboard_report();
			del_key(keycode);
		}
		dprintf("Deactivating layer: %d \n", layer);
		layer_off(layer);
	}
}

static void handle_modded_layer(uint8_t layer, uint8_t mod, keyrecord_t *record) {
	if (record->event.pressed) {
		dprintf("Activating layer: %d \n", layer);
		layer_on(layer);
		add_mods(MOD_BIT(mod));
		activeMod = mod;
		dprintf("adding active mod: %d, %d \n", activeMod, MOD_BIT(activeMod));
		send_keyboard_report();
	} else {
		activeMod = 0;
		specialModActive = 0;
		specialModCount = 0;
		dprintln("clearing mods and keys");
		clear_mods();
		clear_keys();
		if (record->tap.count == 0 || record->tap.interrupted) {
			dprintln("No tap");
			send_keyboard_report();
		} else {
			dprintln("tapped");
			uint8_t keycode = keymap_key_to_keycode(_QWERTY, record->event.key);
			add_key(keycode);
			send_keyboard_report();
			del_key(keycode);
		}
		dprintf("Deactivating layer: %d \n", layer);
		layer_off(layer);
	}
}

static void handle_special_mod(uint8_t mod, keyrecord_t *record) {

	dprintf("active mod: %d, %d \n", activeMod, MOD_BIT(activeMod));
	dprintf("special mod: %d, %d \n", mod, MOD_BIT(mod));
	if (record->event.pressed) {
		if (mod == activeMod) {
			specialModActive = 1;
			dprintln("special mod is active mod, saveguard for later.");
		} else {
			if (specialModActive == 0 && activeMod != 0) {
				dprintf("no saveguard on active mod, deleting active mod: %d, %d \n", activeMod, MOD_BIT(activeMod));
				del_mods(MOD_BIT(activeMod));
			}
			specialModCount += 1;
		}
		dprintf("adding special mod: %d, %d \n", mod, MOD_BIT(mod));
		add_mods(MOD_BIT(mod));
		send_keyboard_report();
	} else {
		if (mod == activeMod) {
			dprintln("special mod is active mod, removing saveguard");
			specialModActive = 0;
			if (specialModCount > 0) {
				dprintln("stil other special mods active, removing active mod");
				del_mods(MOD_BIT(mod));
				send_keyboard_report();
			}
		} else {
			dprintln("special mod is not active mod, removing one count");
			specialModCount -= 1;
			dprintf("special mod count: %d \n", specialModCount);
			if (specialModCount == 0 && activeMod != 0) {
				dprintln("no other special mods active, adding active mod again");
				add_mods(MOD_BIT(activeMod));
			}
			dprintf("deleting special mod: %d, %d \n", mod, MOD_BIT(mod));
			del_mods(MOD_BIT(mod));
			send_keyboard_report();
		}
	}
}

/*
 * user defined action function
 */
enum function_id {
	NAVIGATION_LAYER,
	MOUSE_LAYER,
	NUMBERS_LAYER,
	FUNCTIONS_LAYER,
	NUMBERS_L_LAYER,
	NUMBERS_R_LAYER,
	SHIFT_L_LAYER,
	SHIFT_R_LAYER,
	SRSHIFT,
	SLSHIFT,
	SRCTRL,
	SLCTRL,
	SLALT,
	SRALT,
	SLGUI,
	SRGUI
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {

	switch (id) {
	case SHIFT_L_LAYER:
		handle_modded_layer(_SHIFT_L, KC_RSHIFT, record);
		break;
	case SHIFT_R_LAYER:
		handle_modded_layer(_SHIFT_R, KC_LSHIFT, record);
		break;
	case NAVIGATION_LAYER:
		handle_layer(_NAV_R, record);
		break;
	case MOUSE_LAYER:
		handle_layer(_NAV_L, record);
		break;
	case NUMBERS_L_LAYER:
		handle_layer(_NRS_L, record);
		break;
	case NUMBERS_R_LAYER:
		handle_layer(_NRS_R, record);
		break;
	case NUMBERS_LAYER:
		handle_layer(_NRS, record);
		break;
	case FUNCTIONS_LAYER:
		handle_layer(_FUNC, record);
	break;
	case SLSHIFT:
		handle_special_mod(KC_LSHIFT, record);
		break;
	case SRSHIFT:
		handle_special_mod(KC_RSHIFT, record);
		break;
	case SLCTRL:
		handle_special_mod(KC_LCTRL, record);
		break;
	case SRCTRL:
		handle_special_mod(KC_RCTRL, record);
		break;
	case SLALT:
		handle_special_mod(KC_LALT, record);
		break;
	case SLGUI:
		handle_special_mod(KC_LGUI, record);
		break;
	case SRGUI:
		handle_special_mod(KC_RGUI, record);
		break;
	}
}

const uint16_t PROGMEM fn_actions[] = {
	[_NAV_R] = ACTION_FUNCTION_TAP(NAVIGATION_LAYER),
	[_NAV_L] = ACTION_FUNCTION_TAP(MOUSE_LAYER),
	[_SHIFT_L] = ACTION_FUNCTION_TAP(SHIFT_L_LAYER),
	[_SHIFT_R] = ACTION_FUNCTION_TAP(SHIFT_R_LAYER),
	[_NRS_L] = ACTION_FUNCTION_TAP(NUMBERS_L_LAYER),
	[_NRS_R] = ACTION_FUNCTION_TAP(NUMBERS_R_LAYER),
	[_NRS] = ACTION_FUNCTION(NUMBERS_LAYER),
	[_FUNC] = ACTION_FUNCTION(FUNCTIONS_LAYER),
	[_SP_LSHIFT] = ACTION_FUNCTION(SLSHIFT),
	[_SP_LCTRL] = ACTION_FUNCTION(SLCTRL),
	[_SP_LALT] = ACTION_FUNCTION(SLALT),
	[_SP_LGUI] = ACTION_FUNCTION(SLGUI),
	[_SP_RSHIFT] = ACTION_FUNCTION(SRSHIFT),
	[_SP_RCTRL] = ACTION_FUNCTION(SRCTRL),
	[_SP_RGUI] = ACTION_FUNCTION(SRGUI)
};
