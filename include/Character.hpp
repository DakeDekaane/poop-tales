#ifndef CHARA_H
#define CHARA_H

#include "Item.hpp"
#include <string>
#include <vector>

class Character {
	std::string name;
	int exp;
	int baseHP;
	int baseAtk;
	int baseDef;
	int baseSpd;
	int currentHP;
	int currentAtk;
	int currentDef;
	int currentSpd;
	Item* equippedItem;
	std::vector<Item*> bagpack;
public:
	Character();
	Character(std::string name, int baseHP, int baseAtk, int baseDef, int baseSpd, int exp = 0);
	std::string getName() const;
	int getLevel() const;
	void attack(Character* target);
	void use(Item* item);
	void equip(Item* item);
	void unequip();
	int getCurrentHP() const;
	int getCurrentAtk() const;
	int getCurrentDef() const;
	int getCurrentSpd() const;
	virtual ~Character();
};

#endif