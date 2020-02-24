#ifndef CTRL_CORE_HELPERS_C
#define CTRL_CORE_HELPERS_C

#include "Helpers.h"

float clampFloat(float val, float min, float max)
{
  if (val < min)
  {
    return min;
  }
  if (val > max)
  {
    return max;
  }

  return val;
}

int clampInt(int val, int min, int max)
{
  if (val < min)
  {
    return min;
  }
  if (val > max)
  {
    return max;
  }

  return val;
}

#endif