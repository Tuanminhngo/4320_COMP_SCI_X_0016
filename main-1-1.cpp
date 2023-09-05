#include <iostream>

#include "Q-1-1.h"

class Television : public Appliance {
public:
  Television() {
    this->powerRating = 100;
    this->isOn = false;
  }

  double getPowerConsumption() const override {
    if (this->isOn) {
      return this->powerRating * 1.5;
    } else {
      return 0;
    }
  }
};

int main() {
  Television television;

  std::cout << "The power rating of the television is " << television.getPowerRating() << std::endl;

  television.turnOn();

  std::cout << "The power consumption of the television is now " << television.getPowerConsumption() << std::endl;

  television.turnOff();

  std::cout << "The power consumption of the television is now " << television.getPowerConsumption() << std::endl;

  return 0;
}

