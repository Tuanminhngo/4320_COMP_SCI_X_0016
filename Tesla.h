#ifndef TESLA_H
#define TESLA_H
#include "Car.h"

#include <iostream>

class Tesla : public Car {
protected:
  char model;
  float batteryPercentage;

public:
  Tesla();
  Tesla(char model, int price);

  char get_model() const;
  void set_model(char model);

  float get_batteryPercentage() const;
  void set_batteryPercentage(float batteryPercentage);

  void chargeBattery(int mins);
  void drive(int kms);
};

#endif

