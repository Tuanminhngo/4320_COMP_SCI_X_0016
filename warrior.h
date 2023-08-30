#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"

using namespace std;

class Warrior : public Player {
public:
    string weapon;

    Warrior(string name, int health, int damage, string weapon);

    void swingWeapon(Player* opponent);

    string getName();

    int getHealth();
};

#endif // WARRIOR_H
