#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"
#include "Helicopter.h"
#include <iostream>
class Airplane : public AirCraft{
    public:
    Airplane();                       
    Airplane(int w, int p);           // Create Airplane with weight w and passengers p

    int numPassengers;               // number of passengers on the Airplane
    float fuelPercentage;
    float get_fuelPercentage();
    void set_fuelPercentage( float fuelPercentage);
    void reducePassengers(int x);     // reduce passenger list by x
    int get_numPassengers();
    void fly(int headwind, int minutes);  
};
 
#endif