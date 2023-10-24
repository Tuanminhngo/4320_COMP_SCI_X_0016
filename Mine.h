#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
  public:
    Mine(int x, int y): GameEntity(x, y, 'M'){};

  Explosion explode(){
    setPos(-1, -1);
    return Explosion(-1, -1);
  };
};

#endif