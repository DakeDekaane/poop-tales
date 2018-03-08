#ifndef ENEMY_H
#define ENEMY_H

#include "Character.hpp"

class Enemy : public Character {
	Item* dropItem;
public:
	Enemy();
	Enemy(std::string name, int baseHP, int baseAtk, int baseDef, int baseSpd, int exp = 0);	
	~Enemy();
};

#endif