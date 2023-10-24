#include <iostream>

#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main(){
  Ship ship(5, 5);
  Mine mine(8, 8);

  std::cout << "Initial Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;
  std::cout << "Initial Mine Position: (" << std::get<0>(mine.getPos()) << ", " << std::get<1>(mine.getPos()) << ")" << std::endl;

  ship.move(2, 3);
  std::cout << "New Ship Position: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;

  Explosion explosion = mine.explode();
  explosion.apply(ship);
  std::cout << "Ship Position after Explosion: (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")" << std::endl;

  return 0;
}