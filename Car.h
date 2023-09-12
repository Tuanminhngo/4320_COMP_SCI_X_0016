#ifndef CAR_H
#define CAR_H

class Car {
  
public:
  int price;
  int emissions;

  Car();
  Car(int price);

  int getPrice();
  void setPrice(int price);

  int getEmissions();
  void setEmissions(int emissions);

  virtual void drive(int kms);
};

#endif
