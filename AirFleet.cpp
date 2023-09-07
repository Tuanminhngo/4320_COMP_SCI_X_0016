#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"
#include "AirFleet.h"

// AirFleet::AirFleet(){
//     fleet = new AirCraft *[5];
    
//         fleet[1]= new Airplane(20, 10);
//         fleet[2]= new Helicopter(10000, "BlackHawk"); 
//         fleet[3]= new AirCraft(5000);
//         fleet[4]= new Helicopter(100, "WhiteHawk");
//         fleet[5]= new Airplane(15, 20);
    
// };
// AirCraft **AirFleet:: get_fleet(){
//     return this->fleet;
// }; 





AirFleet::AirFleet() {
    fleet[0] = new Airplane(20, 10);
    fleet[1] = new Helicopter(10000, "BlackHawk");
    fleet[2] = new AirCraft(5000);
    fleet[3] = new Helicopter(100, "WhiteHawk");
    fleet[4] = new Airplane(15, 20);
}

AirCraft** AirFleet::get_fleet() {
    return fleet;
}


