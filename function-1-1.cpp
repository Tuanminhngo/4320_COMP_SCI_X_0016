#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int health;
    int damage;

    Player(string name, int health, int damage) {
        this->name = name;
        this->health = health;
        this->damage = damage;
    }

    void attack(Player* opponent, int damage) {
        opponent->takeDamage(damage);
        cout << this->name << " attacks " << opponent->name << " for " << damage << " damage." << endl;
    }

    void takeDamage(int damage) {
        this->health -= damage;
        cout << this->name << " takes " << damage << " damage." << endl;
    }
};

class Wizard : public Player {
public:
    int mana;

    Wizard(string name, int health, int damage, int mana) : Player(name, health, damage) {
        this->mana = mana;
    }

    void castSpell(Player* opponent) {
        int damage = this->mana * 2;
        opponent->takeDamage(damage);
        cout << this->name << " casts a spell on " << opponent->name << " for " << damage << " damage." << endl;
    }
};

class Warrior : public Player {
public:
    string weapon;

    Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage) {
        this->weapon = weapon;
    }

    void swingWeapon(Player* opponent) {
        int damage = this->damage * 2;
        opponent->takeDamage(damage);
        cout << this->name << " swings their weapon at " << opponent->name << " for " << damage << " damage." << endl;
    }
};