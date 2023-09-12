#include <iostream>
#include "Fleet.h"

#include "Car.h"

int main() {
  Fleet fleet;

  Car **cars = fleet.get_fleet();

  for (int i = 0; i < 5; i++) {
    std::cout << "The price of car " << i + 1 << " is " << cars[i]->getPrice() << std::endl;
  }

  return 0;
}
