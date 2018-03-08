#ifndef GAME_H
#define GAME_H

#include "Player.hpp"
#include "Enemy.hpp"

class Game {
public:
	Player player;
	Enemy enemy;
	Game();
	void start();
};

#endif