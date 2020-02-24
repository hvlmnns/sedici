#ifndef CTRL_CHANNELS_C
#define CTRL_CHANNELS_C

#include "Entrypoint.h"
#include <Audio.h>
#include <Wire.h>

void SetupChannels()
{
  for (int c = 0; c < CHANNELS.length; c++)
  {
    CHANNELS.channel[c].name = (char *)c + 1;
  }

  CHANNELS.channel[0].active = true;
  // CHANNELS.channel[1].active = true;
  // CHANNELS.channel[2].active = true;
  // CHANNELS.channel[3].active = true;
  // CHANNELS.channel[4].active = true;
  // CHANNELS.channel[5].active = true;
  // CHANNELS.channel[6].active = true;
  // CHANNELS.channel[7].active = true;
  // CHANNELS.channel[8].active = true;
  // CHANNELS.channel[9].active = true;
  // CHANNELS.channel[10].active = true;
  // CHANNELS.channel[11].active = true;
  // CHANNELS.channel[12].active = true;
  // CHANNELS.channel[13].active = true;
  // CHANNELS.channel[14].active = true;
  // CHANNELS.channel[15].active = true;
}

void PlayChannels()
{
  for (int c = 0; c < CHANNELS.length; c++)
  {

    char left[32];
    sprintf(left, "%d", c + 1);
    strcat(left, "-L.RAW");

    char right[32];
    sprintf(right, "%d", c + 1);
    strcat(right, "-R.RAW");

    if (CHANNELS.channel[c].active == true)
    {
      if (CHANNELS.channel[c].leftAudio.isPlaying() == false)
      {
        CHANNELS.channel[c].leftAudio.play(left);
      }
      if (CHANNELS.channel[c].rightAudio.isPlaying() == false)
      {
        CHANNELS.channel[c].rightAudio.play(right);
      }
    }
  }
}

#endif