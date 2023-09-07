#include "Car.h"

Car::Car() : price(0), emissions(0) {
  // this->price = 0;
  // this->emissions = 0;
}

Car::Car(int price) {
  this->price = price;
  this->emissions = 0;
}

int Car::getPrice() const { return this->price; }

void Car::setPrice(int price) { this->price = price; }

int Car::getEmissions() const { return this->emissions; }

void Car::setEmissions(int emissions) { this->emissions = emissions; }

void Car::drive(int kms) {
  this->emissions += 20 * kms;
};



