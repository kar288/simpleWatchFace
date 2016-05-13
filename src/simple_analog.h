#pragma once

#include "pebble.h"

#define NUM_CLOCK_TICKS 12

static const GPathInfo BG_POINT_LONG = {
  4, (GPoint []){
    { -2, -75 },
    { 2, -75 },
    { 2, -87 },
    { -2, -87 }
  }
};

static const GPathInfo BG_POINT_SHORT = {
  4, (GPoint []){
    { -2, -80 },
    { 2, -80 },
    { 2, -87 },
    { -2, -87 }
  }
};

static const GPathInfo MINUTE_HAND_POINTS = {
  4, (GPoint []) {
    { -3, 10 },
    { 3, 10 },
    { 3, -60 },
    { -3, -60 }
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  4, (GPoint []){
    { -4, 10 },
    { 4, 10 },
    { 4, -40 },
    { -4, -40 }
  }
};
