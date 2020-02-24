#ifndef CTRL_INPUT_READ_C
#define CTRL_INPUT_READ_C

#include "Globals.h"
#include "Arduino.h"

void InputRead()
{

  for (int i = 0; i < INPUTS.length; i++)
  {

    if (INPUTS.input[i].hasEncoder)
    {
      // Serial.println(INPUTS.input[i].encoderPin);
    }

    if (INPUTS.input[i].hasButton)
    {
      // Serial.println(INPUTS.input[i].buttonPin);
    }

    if (INPUTS.input[i].hasLED)
    {
      // Serial.println(INPUTS.input[i].LEDPins[0]);
      // Serial.println(INPUTS.input[i].LEDPins[1]);
      // Serial.println(INPUTS.input[i].LEDPins[2]);
    }
  }
}

#endif