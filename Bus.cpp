#include "Vehicle.h"
#include "Bus.h"
#include <ctime>

using namespace std;

Bus::Bus(int ID) : Vehicle(ID) {}

int Bus::getParkingDuration(){
  time_t currentTime = time(nullptr);
  return static_cast<int>(0.9 * (currentTime - getTimeOfEntry()));
}