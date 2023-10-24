#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main() {
    GameEntity entity(2, 3, 'A');
    std::tuple<int, int> pos = entity.getPos();
    char type = entity.getType();

    std::cout << "Entity Position: (" << std::get<0>(pos) << ", " << std::get<1>(pos) << ")" << std::endl;
    std::cout << "Entity Type: " << type << std::endl;

    std::tuple<int, int> randomPos = Utils::generateRandomPos(10, 10);
    std::cout << "Random Position: (" << std::get<0>(randomPos) << ", " << std::get<1>(randomPos) << ")" << std::endl;

    double distance = Utils::calculateDistance(std::make_tuple(1, 1), std::make_tuple(4, 5));
    std::cout << "Distance between (1,1) and (4,5): " << distance << std::endl;

    return 0;
}