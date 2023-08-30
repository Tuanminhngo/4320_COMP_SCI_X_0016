#include <ctime>
#include <iostream>
#include <vector>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"

using namespace std;

int main() {
  vector<Vehicle*> vehicleList;

  int numCars, numBuses, numMotorbikes;
  cout << "Enter the number of cars: ";
  cin >> numCars;
  cout << "Enter the number of buses: ";
  cin >> numBuses;
  cout << "Enter the number of motorbikes: ";
  cin >> numMotorbikes;

  for (int i = 1; i <= numCars; i++) {
    vehicleList.push_back(new Car(i, 0));
  }

  for (int i = 1; i <= numBuses; i++) {
    vehicleList.push_back(new Bus(i, 0));
  }

  for (int i = 1; i <= numMotorbikes; i++) {
    vehicleList.push_back(new Motorbike(i, 0));
  }

  cout << "Parking Information:" << endl;
  for (const auto& vehicle : vehicleList) {
    if (const Car* car = dynamic_cast<Car*>(vehicle)) {
      cout << "Car ID: " << car->getID()
                << ", Parking Duration: " << car->getParkingDuration()
                << " seconds" << endl;
    } else if (const Bus* bus = dynamic_cast<Bus*>(vehicle)) {
      cout << "Bus ID: " << bus->getID()
                << ", Parking Duration: " << bus->getParkingDuration()
                << " seconds" << endl;
    } else if (const Motorbike* motorbike = dynamic_cast<Motorbike*>(vehicle)) {
      cout << "Motorbike ID: " << motorbike->getID()
                << ", Parking Duration: " << motorbike->getParkingDuration()
                << " seconds" << endl;
    }

    delete vehicle;
  }

  return 0;
}