#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>
using namespace std;

class Vehicle
{
private:
  int ID;
  time_t timeOfEntry;

public:
  Vehicle(int ID);
  int getID(int ID);
  time_t getTimeOfEntry();
  ~Vehicle();
};

#endif 