#include "Tesla.h"
#include "Car.cpp"
#include <iostream>

Tesla::Tesla() {
  this->model = ' ';
  this->batteryPercentage = 100;
}

Tesla::Tesla(char model, int price) : Car(price) {
  this->model = model;
  this->batteryPercentage = 100;
}

char Tesla::get_model() const { return this->model; }

void Tesla::set_model(char model) {
  if (model < 'A' || model > 'Z') {
    throw std::invalid_argument("Invalid model");
  }
  this->model = model;
}

float Tesla::get_batteryPercentage() const { return this->batteryPercentage; }

void Tesla::set_batteryPercentage(float batteryPercentage) {
  if (batteryPercentage < 0 || batteryPercentage > 100) {
    throw std::invalid_argument("Battery percentage must be between 0 and 100");
  }
  this->batteryPercentage = batteryPercentage;
}

void Tesla::chargeBattery(int mins) {
  this->batteryPercentage += 0.5 * mins;
  if (this->batteryPercentage > 100) {
    this->batteryPercentage = 100;
  }
}

void Tesla::drive(int kms) {
  int emissions = kms * 74;
  int batteryDrain = kms / 5;

  this->batteryPercentage -= batteryDrain;
  if (this->batteryPercentage <= 0) {
    return;
  }

  this->emissions += emissions;
}
