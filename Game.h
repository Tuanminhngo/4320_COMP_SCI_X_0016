#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <cstdlib> // for std::rand()
#include <ctime>   // for std::time()

#include "Cell.h"
#include "Character.h"
#include "Trap.h"
#include "Utils.h"

class Game {
private:
    std::vector<Cell*> grid;
    int gridWidth;
    int gridHeight;

public:
    Game(int width, int height);
    std::vector<Cell*>& getGrid();
    void initGame(int numCharacters, int numTraps);
    void gameLoop(int maxIterations, double trapActivationDistance);
    ~Game();
};

Game::Game(int width, int height) : gridWidth(width), gridHeight(height) {
    std::srand(std::time(0)); // Seed for random number generation
}

std::vector<Cell*>& Game::getGrid() {
    return grid;
}

void Game::initGame(int numCharacters, int numTraps) {
    // Initialize grid with Cells
    for (int i = 0; i < gridWidth * gridHeight; ++i) {
        grid.push_back(new Cell(i % gridWidth, i / gridWidth, '-'));
    }

    // Add Characters to the grid at random positions
    for (int i = 0; i < numCharacters; ++i) {
        int x = std::rand() % gridWidth;
        int y = std::rand() % gridHeight;
        grid[x + y * gridWidth] = new Character(x, y);
    }

    // Add Traps to the grid at random positions
    for (int i = 0; i < numTraps; ++i) {
        int x = std::rand() % gridWidth;
        int y = std::rand() % gridHeight;
        grid[x + y * gridWidth] = new Trap(x, y);
    }
}

void Game::gameLoop(int maxIterations, double trapActivationDistance) {
    for (int iteration = 0; iteration < maxIterations; ++iteration) {
        // Move all Characters to the right
        for (auto cell : grid) {
            if (dynamic_cast<Character*>(cell)) {
                cell->move(1, 0);
            }
        }

        // Check for nearby Trap objects and apply them to Characters
        for (auto cell : grid) {
            if (dynamic_cast<Character*>(cell)) {
                for (auto otherCell : grid) {
                    if (dynamic_cast<Trap*>(otherCell)) {
                        double distance = Utils::calculateDistance(cell->getPos(), otherCell->getPos());
                        if (distance <= trapActivationDistance) {
                            // Apply the Trap effect on the Character
                            cell->setType('T');
                        }
                    }
                }
            }
        }

        // Check if any Character has stepped outside of the grid
        for (auto cell : grid) {
            if (dynamic_cast<Character*>(cell)) {
                int x = cell->getPos().first;
                if (x >= gridWidth) {
                    std::cout << "Character has won the game!" << std::endl;
                    return;
                }
            }
        }
    }

    std::cout << "Maximum number of iterations reached. Game over." << std::endl;
}

Game::~Game() {
    for (auto cell : grid) {
        delete cell;
    }
    grid.clear();
}

#endif // GAME_HPP
