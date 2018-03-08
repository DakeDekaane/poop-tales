#ifndef PLAYER_H
#define PLAYER_H

#include "Character.hpp"

class Player : public Character {
public:
	Player();
	Player(std::string name, int baseHP, int baseAtk, int baseDef, int baseSpd, int exp = 0);	
	void setName(std::string name);
	void gainExp(int amount);
};

#endif
