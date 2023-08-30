#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include <iostream>
#include "Vehicle.h"

using namespace std;

class Motorbike:public Vehicle
{
public:
  int getParkingDuration();

  Motorbike(int ID);
};

#endif