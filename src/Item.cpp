#include "Item.hpp"

Item::Item(std::string name, std::string description, int bonusHP, int bonusAtk, int bonusDef, int bonusSpd, ItemType type) :
			name(name), description(description), bonusHP(bonusHP), bonusAtk(bonusAtk), bonusDef(bonusDef), bonusSpd(bonusSpd), type(type) { }

std::string Item::getDescription() const {
	//Simple getter
}

ItemType Item::getType() const {
	//Simple getter
}