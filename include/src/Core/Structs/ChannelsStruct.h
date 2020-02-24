#ifndef CTRL_CORE_STRUCTS_CHANNELS_STRUCT_H
#define CTRL_CORE_STRUCTS_CHANNELS_STRUCT_H

#include <stdbool.h>
#include "ChannelStruct.h"

typedef struct ChannelsStruct
{
  int length = 16;
  ChannelStruct channel[16];
} ChannelsStruct;

#endif
