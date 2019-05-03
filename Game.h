#pragma once
#include "WolfM.h"
#include "WolfW.h"
#include "Rabbit.h"
#include "Animal.h"
class Game
{
public:
	Game();
	void setup() {
		Rabbit::addRabbit();
	}
	~Game();
};

