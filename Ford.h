#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
protected:
  int badgeNumber;
  float litresOfFuel;

public:
  Ford();
  Ford(int badgeNumber, int price);

  int get_badgeNumber() const;
  void set_badgeNumber(int badgeNumber);

  float get_litresOfFuel() const;
  void set_litresOfFuel(float litresOfFuel);

  void refuel(int litres);
  void drive(int kms);
};

#endif


