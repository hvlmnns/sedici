#ifndef CTRL_CORE_STRUCTS_INPUTS_STRUCT_H
#define CTRL_CORE_STRUCTS_INPUTS_STRUCT_H

#include <stdbool.h>
#include "InputStruct.h"

typedef struct InputsStruct
{
  int length = 33;
  InputStruct input[33];
} InputsStruct;

#endif
