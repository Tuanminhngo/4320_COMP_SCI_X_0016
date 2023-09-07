#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"
#include <iostream>
#include <string>
using namespace std;
   
   
   
    Airplane::Airplane(){};                       
    Airplane::Airplane(int w, int p) : AirCraft(weight){
        this->numPassengers = p;
    };           // Create Airplane with weight w and passengers p

   // int numPassengers;               // number of passengers on the Airplane

    void Airplane::reducePassengers(int x){
        numPassengers -= x;
        if(numPassengers < 0){
            numPassengers = 0;
        }
    };     // reduce passenger list by x
    int Airplane:: get_numPassengers(){
        return this->numPassengers;
    };
    
    float Airplane:: get_fuelPercentage(){
        return this->fuelPercentage;
    };
    void Airplane:: set_fuelPercentage( float fuelPercentage){
        this->fuelPercentage = fuelPercentage;
    };

    void Airplane::fly(int headwind, int minutes) {
        double fuelPercentage = get_fuelPercentage();
        double fuelUsage = 0.003; // default fuel usage rate of 0.3% per minute
        if (headwind >= 60) {
            fuelUsage = 0.005; // increased fuel usage rate of 0.5% per minute for headwind over 60 km/hour
        }
        fuelUsage += (0.00001 * numPassengers); // additional fuel usage of 0.001% per minute per passenger
        double fuelConsumption = fuelUsage * minutes;
        double fuelRemaining = fuelPercentage - fuelConsumption;
        if (fuelRemaining >= 0.2) {
            set_fuelPercentage(fuelRemaining);
            this->numberOfFlights +=1;
    }
}

