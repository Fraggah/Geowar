#include <iostream>

#include "Game.h"

int main(int argc, char * argv[])
{
	Game* game = new Game("src/Config.txt");
	game->run();

	delete game;
	return 0;
}