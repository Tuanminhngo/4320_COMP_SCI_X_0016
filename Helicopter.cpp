#include "AirCraft.h"
#include "Helicopter.h"
#include <iostream>
#include <string>
using namespace std;

    Helicopter:: Helicopter(){};
    Helicopter::Helicopter(int w, string n) : AirCraft(w){
        this->name = n;
    }; 
        // creates a Helicopter with weight w and name n
    // string Helicopter:: get_name(){
    //     return this->name;
    // };
    // void set_name(string n){
    //     n = "a";
    // };
    //string name;                    // name of the Helicopter
    //void Helicopter:: fly(int headwind, int minutes);





void Helicopter::fly(int headwind, int minutes) {
    float fuelCost = 0.2;

    if (headwind >= 40) {
        fuelCost = 0.4;
    }

    fuelCost += (get_weight() - 5670) * 0.0001;

    if (fuelCost * minutes > get_fuel() - 20) {
        return;
    }

    set_fuel(get_fuel() - fuelCost * minutes);
    set_numberOfFlights(get_numberOfFlights() + 1);
}

std::string Helicopter::get_name()  {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}
