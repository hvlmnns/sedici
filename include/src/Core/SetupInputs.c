#ifndef CTRL_SETUP_INPUTS_C
#define CTRL_SETUP_INPUTS_C

#include "Entrypoint.h"

void SetupInputs()
{
  INPUTS.input[INPUT_FN].name = (char *)"FN";
  INPUTS.input[INPUT_FN].hasButton = true;
  INPUTS.input[INPUT_FN].hasLED = true;
  INPUTS.input[INPUT_FN].buttonPin = 0;
  INPUTS.input[INPUT_FN].LEDPins[0] = 1;
  INPUTS.input[INPUT_FN].LEDPins[1] = 2;
  INPUTS.input[INPUT_FN].LEDPins[2] = 3;

  INPUTS.input[INPUT_MUTE].name = (char *)"MUTE";
  INPUTS.input[INPUT_MUTE].hasButton = true;
  INPUTS.input[INPUT_MUTE].hasLED = true;
  INPUTS.input[INPUT_MUTE].buttonPin = 4;
  INPUTS.input[INPUT_MUTE].LEDPins[0] = 5;
  INPUTS.input[INPUT_MUTE].LEDPins[1] = 6;
  INPUTS.input[INPUT_MUTE].LEDPins[2] = 7;

  INPUTS.input[INPUT_PLAY].name = (char *)"PLAY";
  INPUTS.input[INPUT_PLAY].buttonPin = 3;

  INPUTS.input[INPUT_REC].name = (char *)"REC";
  INPUTS.input[INPUT_REC].buttonPin = 4;

  INPUTS.input[INPUT_PAD1].name = (char *)"PAD1";
  INPUTS.input[INPUT_PAD1].buttonPin = 5;

  INPUTS.input[INPUT_PAD2].name = (char *)"PAD2";
  INPUTS.input[INPUT_PAD2].buttonPin = 6;

  INPUTS.input[INPUT_PAD3].name = (char *)"PAD3";
  INPUTS.input[INPUT_PAD3].buttonPin = 7;

  INPUTS.input[INPUT_PAD4].name = (char *)"PAD4";
  INPUTS.input[INPUT_PAD4].buttonPin = 8;

  INPUTS.input[INPUT_PAD5].name = (char *)"PAD5";
  INPUTS.input[INPUT_PAD5].buttonPin = 9;

  INPUTS.input[INPUT_PAD6].name = (char *)"PAD6";
  INPUTS.input[INPUT_PAD6].buttonPin = 10;

  INPUTS.input[INPUT_PAD7].name = (char *)"PAD7";
  INPUTS.input[INPUT_PAD7].buttonPin = 11;

  INPUTS.input[INPUT_PAD8].name = (char *)"PAD8";
  INPUTS.input[INPUT_PAD8].buttonPin = 12;

  INPUTS.input[INPUT_PAD9].name = (char *)"PAD9";
  INPUTS.input[INPUT_PAD9].buttonPin = 13;

  INPUTS.input[INPUT_PAD10].name = (char *)"PAD10";
  INPUTS.input[INPUT_PAD10].buttonPin = 14;

  INPUTS.input[INPUT_PAD11].name = (char *)"PAD11";
  INPUTS.input[INPUT_PAD11].buttonPin = 15;

  INPUTS.input[INPUT_PAD12].name = (char *)"PAD12";
  INPUTS.input[INPUT_PAD12].buttonPin = 16;

  INPUTS.input[INPUT_PAD13].name = (char *)"PAD13";
  INPUTS.input[INPUT_PAD13].buttonPin = 17;

  INPUTS.input[INPUT_PAD14].name = (char *)"PAD14";
  INPUTS.input[INPUT_PAD14].buttonPin = 18;

  INPUTS.input[INPUT_PAD15].name = (char *)"PAD15";
  INPUTS.input[INPUT_PAD15].buttonPin = 19;

  INPUTS.input[INPUT_PAD16].name = (char *)"PAD16";
  INPUTS.input[INPUT_PAD16].buttonPin = 20;

  INPUTS.input[INPUT_ENCL1].name = (char *)"ENCL1";
  INPUTS.input[INPUT_ENCL1].buttonPin = 21;

  INPUTS.input[INPUT_ENCL2].name = (char *)"ENCL2";
  INPUTS.input[INPUT_ENCL2].encoderPin = 22;
  INPUTS.input[INPUT_ENCL2].buttonPin = 23;

  INPUTS.input[INPUT_ENCL3].name = (char *)"ENCL3";
  INPUTS.input[INPUT_ENCL3].encoderPin = 24;
  INPUTS.input[INPUT_ENCL3].buttonPin = 25;

  INPUTS.input[INPUT_ENCL4].name = (char *)"ENCL4";
  INPUTS.input[INPUT_ENCL4].encoderPin = 26;
  INPUTS.input[INPUT_ENCL4].buttonPin = 27;

  INPUTS.input[INPUT_ENCL5].name = (char *)"ENCL5";
  INPUTS.input[INPUT_ENCL5].encoderPin = 28;
  INPUTS.input[INPUT_ENCL5].buttonPin = 29;

  INPUTS.input[INPUT_ENCR1].name = (char *)"ENCR1";
  INPUTS.input[INPUT_ENCR1].encoderPin = 30;
  INPUTS.input[INPUT_ENCR1].buttonPin = 31;

  INPUTS.input[INPUT_ENCR2].name = (char *)"ENCR2";
  INPUTS.input[INPUT_ENCR2].encoderPin = 32;
  INPUTS.input[INPUT_ENCR2].buttonPin = 33;

  INPUTS.input[INPUT_ENCR3].name = (char *)"ENCR3";
  INPUTS.input[INPUT_ENCR3].encoderPin = 34;
  INPUTS.input[INPUT_ENCR3].buttonPin = 35;

  INPUTS.input[INPUT_ENCR4].name = (char *)"ENCR4";
  INPUTS.input[INPUT_ENCR4].encoderPin = 36;
  INPUTS.input[INPUT_ENCR4].buttonPin = 37;

  INPUTS.input[INPUT_ENCR5].name = (char *)"ENCR5";
  INPUTS.input[INPUT_ENCR5].encoderPin = 38;
  INPUTS.input[INPUT_ENCR5].buttonPin = 39;

  INPUTS.input[INPUT_ENC6].name = (char *)"ENC6";
  INPUTS.input[INPUT_ENC6].encoderPin = 40;
  INPUTS.input[INPUT_ENC6].buttonPin = 41;

  INPUTS.input[INPUT_ENC7].name = (char *)"ENC7";
  INPUTS.input[INPUT_ENC7].encoderPin = 42;
  INPUTS.input[INPUT_ENC7].buttonPin = 43;

  INPUTS.input[INPUT_ENC8].name = (char *)"ENC8";
  INPUTS.input[INPUT_ENC8].encoderPin = 44;
  INPUTS.input[INPUT_ENC8].buttonPin = 45;
}

#endif
