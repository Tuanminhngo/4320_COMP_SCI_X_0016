#ifndef HELICOPTER_H;
#define HELICOPTER_H;
#include "AirCraft.h"
#include <iostream>
#include <string>
using namespace std;

class Helicopter : public AirCraft
{
public: 
    Helicopter();
    Helicopter(int w, string n); 
        // creates a Helicopter with weight w and name n
    string get_name();
    void set_name(string n);
    string name;                    // name of the Helicopter
    void fly(int headwind, int minutes);
};
#endif