#include "Musician.h"

using namespace std;

//overloading
Musician::Musician() : instrument_("null"), experience_(0) {}
Musician::Musician(string instrument, int experience) {
  this -> instrument_ = instrument;
  this -> experience_ = experience;
}
string Musician::get_instrument(){
  return instrument_;
}
int Musician::get_experience() {
  return experience_;
}

