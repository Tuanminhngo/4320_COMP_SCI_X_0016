#include "Orchestra.h"
#include "Musician.h"

#include <string>

using namespace std;

Orchestra::Orchestra() : size_(0), current_size_(0) {}
Orchestra::Orchestra(int size){
  this -> size_ = size;

  this -> musicians = (Musician*) malloc(sizeof(Musician)*this->size_);
};

bool Orchestra::has_instrument(string instrument){
    for (int i = 0; i < this -> size_; i++){
      if (instrument.compare(this -> musicians[i].get_instrument()) == 0){
        return true;
    }
  }
};

bool Orchestra::add_musician(Musician new_musician){
  if(this-> current_size_+1 >= this-> size_){
    return false;
  } 
  this->musicians[++current_size_] = new_musician;
  return true;
};


