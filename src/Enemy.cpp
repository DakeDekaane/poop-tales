#include "Enemy.hpp"

Enemy::Enemy() { }

Enemy::Enemy(std::string name, int baseHP, int baseAtk, int baseDef, int baseSpd, int exp) :
				Character(name,baseHP,baseAtk,baseDef,baseSpd,exp) { }

Enemy::~Enemy() { }