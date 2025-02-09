#ifndef KAR_SDK_RIDER_KEYCODES
#define KAR_SDK_RIDER_KEYCODES

//defines the keycodes so we can use them to get input

//defines controller port indexes
#define GC_SYSTEM_CONTROLLER_PORT_1, 0
#define GC_SYSTEM_CONTROLLER_PORT_2, 1
#define GC_SYSTEM_CONTROLLER_PORT_3, 2
#define GC_SYSTEM_CONTROLLER_PORT_4, 3

//defines the controller inputs

//D-Pad
#define KEYCODE_PRESS_PAD_LEFT    0x00000001
#define KEYCODE_PRESS_PAD_RIGHT   0x00000002
#define KEYCODE_PRESS_PAD_DOWN    0x00000004
#define KEYCODE_PRESS_PAD_UP      0x00000008

//triggers
#define KEYCODE_PRESS_TRIGGER_Z           0x00000010
#define KEYCODE_PRESS_TRIGGER_R           0x00000020
#define KEYCODE_PRESS_TRIGGER_L           0x00000040

//main buttons
#define KEYCODE_PRESS_A            0x00000100
#define KEYCODE_PRESS_B            0x00000200
#define KEYCODE_PRESS_X            0x00000400
#define KEYCODE_PRESS_Y            0x00000800
#define KEYCODE_PRESS_START        0x00001000

//grey main stick
#define KEYCODE_MAIN_STICK_UP           0x00010000
#define KEYCODE_MAIN_STICK_DOWN         0x00020000
#define KEYCODE_MAIN_STICK_LEFT         0x00040000
#define KEYCODE_MAIN_STICK_RIGHT        0x00080000

//yellow C stick
#define KEYCODE_C_STICK_UP                0x00100000
#define KEYCODE_C_STICK_DOWN              0x00200000
#define KEYCODE_C_STICK_LEFT              0x00400000
#define KEYCODE_C_STICK_RIGHT             0x00800000

#endif