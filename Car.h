#ifndef CAR_H
#define CAR_H

class Car {
protected:
  int price;
  int emissions;

public:
  Car();
  Car(int price);

  int getPrice() const;
  void setPrice(int price);

  int getEmissions() const;
  void setEmissions(int emissions);

  virtual void drive(int kms);
};

#endif
