#include "GameEntity.h"

class Ship: public GameEntity{
  public:
  Ship(int x, int y) : GameEntity(x, y, 'S'){};

  void move(int dx, int dy){
  int x, y;
  std::tie(x,y) =  getPos();
  setPos(x + dx, y + dy);
  };
};
