#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

class Character : public Cell {
public:
    Character(int x, int y);
    void move(int dx, int dy);
};

Character::Character(int x, int y) : Cell(x, y, 'C') {}

void Character::move(int dx, int dy) {
    setPos(std::get<0>(getPos()) + dx, std::get<1>(getPos()) + dy);
}

#endif
