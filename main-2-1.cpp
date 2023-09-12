#include "Tesla.h"
#include "Car.h"
#include <iostream>


using namespace std;

int main() {
  Tesla tesla('S', 100000);

  cout << "The model of the Tesla car is " << tesla.get_model() << endl;
  cout << "The battery percentage of the Tesla car is " << tesla.get_batteryPercentage() << endl;

  tesla.drive(100);

  cout << "The emissions of the Tesla car after driving 100 km is " << tesla.getEmissions() << endl;

  tesla.chargeBattery(30);

  cout << "The battery percentage of the Tesla car after charging for 30 minutes is " << tesla.get_batteryPercentage() << endl;

  return 0;
}
