#ifndef AIRFLEET_H
#define AIRFLEET_H
#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet{
public:
    AirFleet();                          
    /* creates an air fleet containing pointers to 5 AirCraft objects as an array; 
    */

    AirCraft **fleet;
    AirCraft **get_fleet(); 
// private:
//     AirCraft* fleet[5];

};
#endif

