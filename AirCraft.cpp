#include <iostream>
#include "AirCraft.h"
using namespace std;

    AirCraft::AirCraft(){};
    AirCraft::AirCraft(int w){
        this->weight = w;
        this->fuel = 100;
        this->numberOfFlights = 0;
    }; 



    int AirCraft:: get_weight(){
        return this->weight;
    };
    void AirCraft:: set_weight(int weight){
        this->weight=weight;
    };

    float AirCraft :: get_fuel(){
        return this->fuel;
    };
    void AirCraft:: set_fuel( float f){
        this->fuel = f;
    };

    int AirCraft::get_numberOfFlights(){
        return this->numberOfFlights;
    };
    void AirCraft:: set_numberOfFlights( int n){
        this->numberOfFlights = n;
    };

    void AirCraft:: refuel(){
        fuel = 100;
        if(fuel>100){
            fuel = 100;
        }
    };                       // Resets fuel back to 100%
    void AirCraft:: fly(int headwind, int minutes){
        this->numberOfFlights +=1;
    };