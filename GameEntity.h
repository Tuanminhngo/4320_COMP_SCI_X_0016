#include <iostream>
#include <tuple>
#include <ctime>
#include <cmath>

class GameEntity{
private:
    std::tuple<int, int> position;
    char type;
public:
    GameEntity(int x, int y, char t){
        position = std::make_tuple(x, y);
        this->type = type;
    };

    std::tuple<int, int> getPos() const {
        return position;
    }

    char getType() const {
        return type;
    }

    void GameEntity::setPos(int x, int y) {
        position = std::make_tuple(x, y);
    }
};




