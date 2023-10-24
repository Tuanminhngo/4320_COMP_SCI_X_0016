#include <vector>

#include "GameEntity.h"
#include "Utils.h"

class Game {
  private:
    std::vector<GameEntity*> entities;

  public:
    std::vector<GameEntity*> getEntities() const{
      return entities;
    }

    void setEntities(std::vector<GameEntity*> newEntities){
      entities = newEntities;
    }

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
      for (int i = 0; i < numShips; ++i){
        auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Ship(std::get<0>(pos), std::get<1>(pos)));
      }

      for (int i = 0; i < numMines; ++i){
        auto pos = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Mine(std::get<0>(pos), std::get<1>(pos)));
      }
    };
    void gameLoop(int maxIterations, double mineDistanceThreshold){
    int iterations = 0;
    while (iterations < maxIterations) {
        // Move all ships
        for (auto entity : entities) {
            if (entity->getType() == 'S') {
                Ship* ship = dynamic_cast<Ship*>(entity);
                ship->move(1, 0);
            }
        }

        // Check for collisions and explode mines
        for (auto ship : entities) {
            if (ship->getType() == 'S') {
                for (auto mine : entities) {
                    if (mine->getType() == 'M') {
                        double distance = Utils::calculateDistance(ship->getPos(), mine->getPos());
                        if (distance < mineDistanceThreshold) {
                            Mine* mineObj = dynamic_cast<Mine*>(mine);
                            mineObj->explode();
                        }
                    }
                }
            }
        }

        // Check if all ships are destroyed
        bool allShipsDestroyed = true;
        for (auto entity : entities) {
            if (entity->getType() == 'S') {
                allShipsDestroyed = false;
                break;
            }
        }

        if (allShipsDestroyed) {
            std::cout << "All ships destroyed! Game over." << std::endl;
            break;
        }

        ++iterations;
    };
  };
};

