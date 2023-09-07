#include <iostream>
#include "Car.h"
#include "Car.cpp"

using namespace std;

int main() {
  Car car(10000);

  cout << "The price of the car is " << car.getPrice() << endl;
  cout << "The emissions of the car is " << car.getEmissions() << endl;

  car.drive(100);

  cout << "The emissions of the car after driving 100 km is " << car.getEmissions() << endl;

  return 0;
}
