#include "Game.h"
#include <iostream>

int main() {
    Game game;

    int numShips = 3;
    int numMines = 3;
    int gridWidth = 10;
    int gridHeight = 10;

    // Initialize the game entities
    std::vector<GameEntity*> entities = game.initGame(numShips, numMines, gridWidth, gridHeight);
    
    // Print initial game entities
    std::cout << "Initial game entities:" << std::endl;
    for (auto entity : entities) {
        std::cout << "Type: " << entity->getType() << ", Position: "  << std::endl;
    }

    // Simulate the game
    int maxIterations = 100;
    double mineDistanceThreshold = 3.0;
    game.gameLoop(maxIterations, mineDistanceThreshold);

    // Print final game entities
    std::cout << "\nFinal game entities:" << std::endl;
    for (auto entity : entities) {
        std::cout << "Type: " << entity->getType() << ", Position: " << std::endl;
        delete entity; // Don't forget to delete the allocated entities
    }

    return 0;
}
