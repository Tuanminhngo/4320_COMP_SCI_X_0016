#include "Q-1-1.h"

Appliance::Appliance() {
  this->powerRating = 0;
  this->isOn = false;
}

Appliance::Appliance(int powerRating) {
  this->powerRating = powerRating;
  this->isOn = false;
}

int Appliance::getPowerRating() const { return this->powerRating; }

void Appliance::setPowerRating(int powerRating) { this->powerRating = powerRating; }

bool Appliance::getIsOn() const { return this->isOn; }

void Appliance::setIsOn(bool isOn) { this->isOn = isOn; }

void Appliance::turnOn() { this->isOn = true; }

void Appliance::turnOff() { this->isOn = false; }

double Appliance::getPowerConsumption() const { return 0; }
