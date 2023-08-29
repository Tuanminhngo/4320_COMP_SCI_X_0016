#include "wizard.h"
using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage) {
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    int damage = this->mana * 2;
    opponent->takeDamage(damage);
    cout << this->name << " casts a spell on " << opponent->name << " for " << damage << " damage." << endl;
}
