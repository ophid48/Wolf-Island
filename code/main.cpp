#include "Game.h"


int main()
{

	
	Game game;

	while(game.isRestart()) {
		//game.setup();
		game.start();
	}

	return 0;
}