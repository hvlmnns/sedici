#ifndef CTRL_INPUT_MAPPING_C
#define CTRL_INPUT_MAPPING_C

#include "src/Handlers.h"
#include "Inputs.h"

void InputMapping()
{
  // Global Encoders
  if (INPUTS.input[INPUT_ENC6].changed)
  {
    if ((INPUTS.input[INPUT_FN].down && INPUTS.input[INPUT_ENC6].down) || INPUTS.input[INPUT_FN].down)
    {
      AddRecordStep();
    }
    else if (INPUTS.input[INPUT_ENC6].down)
    {
      ChangeCVRecordQuantisationAccuracy(INPUTS.input[INPUT_ENC6].value);
    }
    else
    {
      SetRecordLength(INPUTS.input[INPUT_ENC6].value);
    }
  }

  if (INPUTS.input[INPUT_ENC7].changed)
  {
    if ((INPUTS.input[INPUT_FN].down && INPUTS.input[INPUT_ENCL1].down) || INPUTS.input[INPUT_FN].down)
    {
      SetOverdubMode();
    }
    else if (INPUTS.input[INPUT_ENCL1].down)
    {
      ChangeCVRecordQuantisation(INPUTS.input[INPUT_ENCL1].value);
    }
    else
    {
      SetRecordQuantisation(INPUTS.input[INPUT_ENC6].value);
    }
  }

  if (INPUTS.input[INPUT_ENC8].changed)
  {
    if (INPUTS.input[INPUT_ENC8].down)
    {
      ToggleBypass();
    }
    else
    {
      ChangeBypassVolume(INPUTS.input[INPUT_ENC8].value);
    }
  }

  // Left Encoders
  if (INPUTS.input[INPUT_ENCL1].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeCueMix(INPUTS.input[INPUT_ENCL1].value);
    }
    else if (INPUTS.input[INPUT_ENCL1].down)
    {
      ChangeCueVolume(INPUTS.input[INPUT_ENCL1].value);
    }
    else
    {
      ChangeVolume(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL1].value);
    }
  }

  if (INPUTS.input[INPUT_ENCL2].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeHighEQ(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL2].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeLowPassAmount(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL2].value);
    }
    else
    {
      ChangeLowPass(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL2].value);
    }
  }

  if (INPUTS.input[INPUT_ENCL3].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeMidEQ(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL3].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeBandPassAmount(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL3].value);
    }
    else
    {
      ChangeBandPass(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL3].value);
    }
  }

  if (INPUTS.input[INPUT_ENCL4].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeLowEQ(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL4].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeEffectParamOne(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL4].value);
    }
    else
    {
      ChangeHighPass(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL4].value);
    }
  }

  if (INPUTS.input[INPUT_ENCL5].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeEffectWet(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL5].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeEffectParamOne(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL5].value);
    }
    else
    {
      ChangeEffectParamTwo(LEFT_CHANNEL, INPUTS.input[INPUT_ENCL5].value);
    }
  }

  // Right Encoders
  if (INPUTS.input[INPUT_ENCR1].changed)
  {
    if (INPUTS.input[INPUT_FN].down || INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeMasterVolume(INPUTS.input[INPUT_ENCR1].value);
    }
    else
    {
      ChangeVolume(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR1].value);
    }
  }

  if (INPUTS.input[INPUT_ENCR2].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeHighEQ(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR2].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeLowPassAmount(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR2].value);
    }
    else
    {
      ChangeLowPass(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR2].value);
    }
  }

  if (INPUTS.input[INPUT_ENCR3].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeMidEQ(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR3].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeBandPassAmount(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR3].value);
    }
    else
    {
      ChangeBandPass(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR3].value);
    }
  }

  if (INPUTS.input[INPUT_ENCR4].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeLowEQ(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR4].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeHighPassAmount(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR4].value);
    }
    else
    {
      ChangeHighPass(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR4].value);
    }
  }

  if (INPUTS.input[INPUT_ENCR5].changed)
  {
    if (INPUTS.input[INPUT_FN].down)
    {
      ChangeEffectWet(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR5].value);
    }
    else if (INPUTS.input[INPUT_ENCR1].down)
    {
      ChangeEffectParamOne(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR5].value);
    }
    else
    {
      ChangeEffectParamTwo(RIGHT_CHANNEL, INPUTS.input[INPUT_ENCR5].value);
    }
  }
}

#endif