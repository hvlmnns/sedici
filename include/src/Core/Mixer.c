#ifndef CTRL_MIXER_C
#define CTRL_MIXER_C
#include <Audio.h>
#include <Wire.h>
#include "Mixer.h"

void SetMasterVolume(float volume)
{
  leftMixerMaster.gain(0, volume);
  leftMixerMaster.gain(1, volume);
  rightMixerMaster.gain(0, volume);
  rightMixerMaster.gain(1, volume);
}

#endif
