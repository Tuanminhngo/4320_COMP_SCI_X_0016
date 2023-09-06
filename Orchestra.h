#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include "Musician.h"
#include <string>
#include <iostream>

using namespace std;

class Orchestra{
  private:
    int size_;
    Musician *musicians;
    int current_size_;

  public:
    Musician *get_members(); 
    Orchestra();
    Orchestra(int size);
    bool has_instrument(string instrument);
    bool add_musician(Musician new_musician);
    int get_current_number_of_members();
    ~Orchestra();
};

#endif