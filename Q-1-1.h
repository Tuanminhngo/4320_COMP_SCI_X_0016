#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
protected:
  int powerRating;
  bool isOn;

public:
  Appliance();
  Appliance(int powerRating);

  int getPowerRating() const;
  void setPowerRating(int powerRating);

  bool getIsOn() const;
  void setIsOn(bool isOn);

  void turnOn();
  void turnOff();

  virtual double getPowerConsumption() const = 0;
};

#endif
