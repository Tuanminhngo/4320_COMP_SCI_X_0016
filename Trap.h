#ifndef TRAP_H
#define TRAP_H

#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect {
private:
    bool active;

public:
    Trap(int x, int y);
    virtual void apply(Cell& cell) override;
    bool isActive() const;
};

Trap::Trap(int x, int y) : Cell(x, y, 'T'), active(true) {}

void Trap::apply(Cell& cell) {
    cell.setType('T');
    active = false;
}

bool Trap::isActive() const {
    return active;
}

#endif
