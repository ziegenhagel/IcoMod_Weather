/*
  IcoMod_StartScreen.cpp - IcoDesk Module to display the animated Logo.
  Created by Till Michels, February 2, 2023.
*/

#ifndef IcoMod_Weather_h
#define IcoMod_Weather_h

#include "Arduino.h"
#include "IcoMod.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

class IcoMod_Weather : public IcoMod
{
  public:
    IcoMod_Weather(Adafruit_ST7735* tft, const char *city, const char *privateKey, unsigned long refreshTime);
    void onClick();
    void initialize();
    void refresh();
  private:
    unsigned long _lastRefresh;
    unsigned long _refreshTime;
    const char *_city;
    const char *_privateKey;
};

#endif