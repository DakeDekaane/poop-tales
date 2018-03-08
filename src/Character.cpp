#include "Character.hpp"

Character::Character() { }

Character::Character(std::string name, int baseHP, int baseAtk, int baseDef, int baseSpd, int exp) :
					name(name), baseHP(baseHP), baseAtk(baseAtk), baseDef(baseDef), exp(exp) { }

std::string Character::getName() const {
	return name;
}

int Character::getLevel() const {
	//Level formula
}

void Character::attack(Character* target) {
	//Validations
	//Damage Calculations
	//More validations
}

void Character::use(Item* item) {
	//Assign pointers
}

void Character::equip(Item* item) {
	//Assign pointers
}

void Character::unequip() {
	//Assign pointers
}

int Character::getCurrentHP() const {
	//remainingHP
}

int Character::getCurrentAtk() const {
	//baseAtk plus modifiers(buffs, debuffs, etc.)
}

int Character::getCurrentDef() const {
	//baseDef plus modifiers(buffs, debuffs, etc.)
}

int Character::getCurrentSpd() const {
	//baseSpd plus modifiers(buffs, debuffs, etc.)
}

Character::~Character() { }