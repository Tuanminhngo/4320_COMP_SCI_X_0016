#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
  string instrument;
  int experience;

public:
  Musician();
  Musician(std::string instrument, int experience);
  string get_instrument();
  int get_experience();
};

#endif
