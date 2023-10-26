#include <iostream>
#include "Game.h"
#include "Utils.h"

int main() {
    Game game;
    int numCharacters = 3;
    int numTraps = 2;
    int gridWidth = 10;
    int gridHeight = 5;

    game.initGame(numCharacters, numTraps, gridWidth, gridHeight);

    double trapActivationDistance = 2.0;
    int maxIterations = 20;

    game.gameLoop(maxIterations, trapActivationDistance);

    return 0;
}
