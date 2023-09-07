#include "Ford.h"
#include "Car.h"

#include <iostream>
using namespace std;

Ford::Ford() {
  this->badgeNumber = 0;
  this->litresOfFuel = 60;
}

Ford::Ford(int badgeNumber, int price) : Car(price) {
  this->badgeNumber = badgeNumber;
  this->litresOfFuel = 60;
}

int Ford::get_badgeNumber() const { return this->badgeNumber; }

void Ford::set_badgeNumber(int badgeNumber) {
  if (badgeNumber < 0) {
    throw invalid_argument("Badge number must be non-negative");
  }
  this->badgeNumber = badgeNumber;
}

float Ford::get_litresOfFuel() const { return this->litresOfFuel; }

void Ford::set_litresOfFuel(float litresOfFuel) {
  if (litresOfFuel < 0 || litresOfFuel > 60) {
    throw invalid_argument("Fuel must be between 0 and 60");
  }
  this->litresOfFuel = litresOfFuel;
}

void Ford::refuel(int litres) {
  if (litres < 0) {
    throw invalid_argument("Fuel must be non-negative");
  }
  this->litresOfFuel += litres;
  if (this->litresOfFuel > 60) {
    this->litresOfFuel = 60;
  }
}

void Ford::drive(int kms) {
  int emissions = kms * 234;
  int fuelDrain = kms / 5;

  this->litresOfFuel -= fuelDrain;
  if (this->litresOfFuel <= 0) {
    return;
  }

  this->emissions += emissions;
}
