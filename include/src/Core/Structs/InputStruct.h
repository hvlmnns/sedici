#ifndef CTRL_CORE_STRUCTS_INPUT_STRUCT_H
#define CTRL_CORE_STRUCTS_INPUT_STRUCT_H

#include <stdbool.h>

typedef struct InputStruct
{
  int encoderPin;
  int buttonPin;
  int LEDPins[3];
  bool hasEncoder;
  bool hasButton;
  bool hasLED;
  bool down;
  bool changed;
  int value;
  char *name;
} InputStruct;

#endif
