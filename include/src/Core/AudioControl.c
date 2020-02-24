#ifndef CTRL_AUDIO_CONTROL_C
#define CTRL_AUDIO_CONTROL_C

#include <Audio.h>

AudioControlSGTL5000 sgtl5000;

void SetupAudioControl()
{
  AudioMemory(16);
  sgtl5000.enable();
  sgtl5000.volume(1);
}
#endif
