#include "Vehicle.h"
#include "Car.h"
#include <ctime>

using namespace std;

Car::Car(int ID) : Vehicle(ID) {}

int Car::getParkingDuration(){
  time_t currentTime = time(nullptr);
  return static_cast<int>(0.9 * (currentTime - getTimeOfEntry()));
}
