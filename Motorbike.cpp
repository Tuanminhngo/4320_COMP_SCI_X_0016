#include "Vehicle.h"
#include "Motorbike.h"
#include <ctime>

using namespace std;

Motorbike::Motorbike(int ID) : Vehicle(ID) {}

int Motorbike::getParkingDuration(){
  time_t currentTime = time(nullptr);
  return static_cast<int>(0.9 * (currentTime - getTimeOfEntry()));
}