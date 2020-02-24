#ifndef CTRL_CORE_STRUCTS_CHANNEL_STRUCT_H
#define CTRL_CORE_STRUCTS_CHANNEL_STRUCT_H

#include <stdbool.h>
#include <Audio.h>
#include "FxStruct.h"

typedef struct ChannelStruct
{
  char *name;
  float volume;
  bool active;
  AudioPlaySdRaw leftAudio;
  AudioPlaySdRaw rightAudio;
  AudioMixer4 leftMixer;
  AudioMixer4 rightMixer;
  FxStruct fx[16];
} ChannelStruct;

#endif
