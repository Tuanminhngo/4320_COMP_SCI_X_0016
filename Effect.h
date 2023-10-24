#include "GameEntity.h"

class Effect {
public:
    virtual void apply(GameEntity& entity) = 0;
    virtual ~Effect() = default; // Virtual destructor for the base class
};