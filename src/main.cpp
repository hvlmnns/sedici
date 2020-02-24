#include "Entrypoint.h"
#include "Entrypoint.c"

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

void setup()
{
  Serial.begin(9600);
  SetupAudioControl();
  SetupSDCard();
  SetupChannels();
  SetupInputs();
  SetMasterVolume(0.2);
  delay(1000);
}

void loop()
{
  InputRead();
  InputMapping();
  PlayChannels();
}
