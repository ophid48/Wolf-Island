#include <iostream>
#include <ctime>
#include <random>
#include <string>

#include "Game.h"

using namespace sf;
using namespace std;


int main()
{

	
	Game game;

	while(game.isRestart()) {
		//game.setup();
		game.start();
	}

	return 0;
}