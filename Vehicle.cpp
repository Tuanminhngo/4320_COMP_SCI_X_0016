#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle(int ID):ID(ID){}

int Vehicle::getID(int ID){
  return ID;
}

time_t Vehicle::getTimeOfEntry(){
  return timeOfEntry;
}

Vehicle::~Vehicle() {}
