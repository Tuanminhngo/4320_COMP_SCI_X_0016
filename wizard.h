#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

using namespace std;

class Wizard : public Player {
public:
    int mana;

    Wizard(string name, int health, int damage, int mana);

    void castSpell(Player* opponent);
    int getHealth(int health);

    string getName(string name);
};

#endif
