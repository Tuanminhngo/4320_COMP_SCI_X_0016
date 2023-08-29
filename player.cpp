#include "player.h"
using namespace std;

Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent, int damage) {
    opponent->takeDamage(damage);
    cout << this->name << " attacks " << opponent->name << " for " << damage << " damage." << endl;
}

void Player::takeDamage(int damage) {
    this->health -= damage;
    cout << this->name << " takes " << damage << " damage." << endl;
}
