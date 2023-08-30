#include "warrior.h"
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage) {
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    opponent->health -= damage * 2;
    cout << name << " swings their weapon at " << opponent->name << " for " << damage * 2 << " damage." << endl;
}

string Warrior::getName() {
    return name;
}

int Warrior::getHealth() {
    return health;
}
