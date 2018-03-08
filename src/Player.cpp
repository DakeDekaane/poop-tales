#include "Player.hpp"

Player::Player() { }

Player::Player(std::string name, int baseHP, int baseAtk, int baseDef, int baseSpd, int exp) :
				Character(name,baseHP,baseAtk,baseDef,baseSpd,exp) { }

void Player::gainExp(int amount) {
	//stuff
}

void Player::setName(std::string name) {
	//stuff
}