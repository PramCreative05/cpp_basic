/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  class HSLAPixel {
    public:
      //Hue values: 0-360
      double h;
      //Saturation values: 0.0-1.0
      double s;
      //Luminosity values: 0.0-1.0
      double l;
      //alpha values for blending: 0.0-1.0
      double a;

  };


}
