#include "Game.hpp"
#include <iostream>

int main() {
	Game game;
	game.player = Player("Dake",100,20,10,20);
	game.enemy = Enemy("The enemy",100,20,10,20);

	std::cout << game.enemy.getName() << std::endl;
}