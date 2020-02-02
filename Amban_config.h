#ifdef CONFIG_TOP
#include "proffieboard_v1_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 1500
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
//#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_BLASTER_AUTO
#define BLASTER_SHOTS_UNTIL_EMPTY 30
#define BLASTER_JAM_PERCENTAGE 3
#endif

#ifdef CONFIG_PROP
#include "../props/blaster.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
  // Default basic blast color with red audio flicker on blast
  { "Amban", "tracks/Mando9.wav",
    StylePtr<Lockup<BlastFadeout<BlastFadeout<Black,AudioFlicker<Black,Blue>,250,EFFECT_FIRE>,AudioFlicker<Black,Blue>,1500,EFFECT_STUN>,AudioFlicker<Black,Blue>>>(),
    StylePtr<Lockup<BlastFadeout<BlastFadeout<Black,AudioFlicker<Black,Blue>,250,EFFECT_FIRE>,AudioFlicker<Black,Blue>,1500,EFFECT_STUN>,AudioFlicker<Black,Blue>>>(),
    StylePtr<Lockup<BlastFadeout<BlastFadeout<Black,AudioFlicker<Black,Blue>,250,EFFECT_FIRE>,AudioFlicker<Black,Blue>,1500,EFFECT_STUN>,AudioFlicker<Black,Blue>>>() }
};

BladeConfig blades[] = {
 { 0, 
   WS2811BladePtr<1, WS2811_ACTUALLY_800kHz | WS2811_GRB>(),
   WS2811BladePtr<30, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade2Pin, PowerPINS<bladePowerPin4> >(),
   WS2811BladePtr<30, WS2811_ACTUALLY_800kHz | WS2811_GRB, blade3Pin, PowerPINS<bladePowerPin5> >(),
   CONFIGARRAY(presets) },
};


#endif

#ifdef CONFIG_BUTTONS
Button FireButton(BUTTON_FIRE, powerButtonPin, "fire");
Button ModeButton(BUTTON_MODE_SELECT, auxPin, "modeselect");
#endif