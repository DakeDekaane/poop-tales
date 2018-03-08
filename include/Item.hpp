#ifndef ITEM_H
#define ITEM_H

#include <string>

enum ItemType { EQUIPPABLE, CONSUMABLE };

class Item {
	const std::string name;
	const std::string description;
	const enum ItemType type; 
	const int bonusHP;
	const int bonusAtk;
	const int bonusDef;
	const int bonusSpd;
	friend class Character;
public:
	Item(std::string name = "", std::string description = "", int bonusHP = 0, int bonusAtk = 0, int bonusDef = 0, int bonusSpd = 0, ItemType type = EQUIPPABLE);
	std::string getDescription() const;
	ItemType getType() const;
	//~Item();
};

#endif