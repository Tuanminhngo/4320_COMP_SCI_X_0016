#include "player.h"
using namespace std;

Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent, int damage) {
    opponent->health -= damage;
    cout << name << " attacks " << opponent->name << " for " << damage << " damage." << endl;
}

void Player::takeDamage(int damage) {
    health -= damage;
    cout << name << " takes " << damage << " damage." << endl;
}

string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}
