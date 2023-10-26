#include <iostream>
#include "Trap.h"
#include "Character.h"

int main() {
    Trap trap(1, 2);
    Character character(3, 4);

    std::cout << "Trap initial position: (" << std::get<0>(trap.getPos()) << ", " << std::get<1>(trap.getPos()) << ")" << std::endl;
    std::cout << "Character initial position: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")" << std::endl;

    character.move(1, 1);
    trap.apply(character);

    std::cout << "Trap status: " << (trap.isActive() ? "Active" : "Deactivated") << std::endl;
    std::cout << "Character position after move: (" << std::get<0>(character.getPos()) << ", " << std::get<1>(character.getPos()) << ")" << std::endl;

    return 0;
}
