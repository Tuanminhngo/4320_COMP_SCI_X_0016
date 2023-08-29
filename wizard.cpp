#include "wizard.h"

using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage) {
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    opponent->health -= mana * 2;
    cout << name << " casts a spell on " << opponent->name << " for " << mana * 2 << " damage." << endl;
}

string Wizard::getName() {
    return name;
}

int Wizard::getHealth() {
    return health;
}
