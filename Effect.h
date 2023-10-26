#ifndef EFFECT_HPP
#define EFFECT_HPP

class Cell;

class Effect {
public:
    virtual void apply(Cell& cell) = 0;
    virtual ~Effect() {} // Virtual destructor for the base class
};

#endif

