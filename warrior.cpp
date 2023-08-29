#include "warrior.h"
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage) {
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    int damage = this->damage * 2;
    opponent->takeDamage(damage);
    cout << this->name << " swings their weapon at " << opponent->name << " for " << damage << " damage." << endl;
}

int Warrior::getHealth(int health) {
    return health;

}

string Warrior::getName(string name) {
    return name;
}