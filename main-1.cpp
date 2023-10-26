#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

#include <iostream>

class SampleEffect : public Effect {
public:
    void apply(Cell& cell) override {
        std::cout << "Effect applied to cell at position (" << std::get<0>(cell.getPos()) << ", "
                  << std::get<1>(cell.getPos()) << ") with type " << cell.getType() << std::endl;
    }
};

int main() {
    Cell cell(1, 2, 'A');
    std::tuple<int, int> randomPos = Utils::generateRandomPos(10, 10);
    double distance = Utils::calculateDistance(std::make_tuple(1, 2), randomPos);

    std::cout << "Cell position: (" << std::get<0>(cell.getPos()) << ", " << std::get<1>(cell.getPos()) << ")" << std::endl;
    std::cout << "Cell type: " << cell.getType() << std::endl;
    std::cout << "Random position: (" << std::get<0>(randomPos) << ", " << std::get<1>(randomPos) << ")" << std::endl;
    std::cout << "Distance between (1, 2) and random position: " << distance << std::endl;

    SampleEffect sampleEffect;
    sampleEffect.apply(cell);

    return 0;
}