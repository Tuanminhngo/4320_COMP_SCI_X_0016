// #ifndef PLAYER_H
// #define PLAYER_H

// #include <iostream>
// #include <string>

// using namespace std;

// class Player {

// private:
//     string name;
//     int health;
//     int damage;

// public:

//     Player(string name, int health, int damage);

//     void attack(Player* opponent, int damage);

//     void takeDamage(int damage);

//     string getName(string name);

//     int getHealth(int health);

// };

// #endif 


// player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    string name;
    int health;
    int damage;

    Player(string name, int health, int damage);

    void attack(Player* opponent, int damage);

    void takeDamage(int damage);

    string getName();

    int getHealth();
};

#endif // PLAYER_H

