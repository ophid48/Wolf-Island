#pragma once
#include "WolfM.h"
#include "WolfW.h"
#include "Rabbit.h"
#include "Animal.h"

#include <SFML/Graphics.hpp>
#include <vector>
#include <ctime>
#include <iostream>
#include <string>
#include <math.h>
#include <string>
using namespace sf;
using namespace std;

class Game
{
	bool isStart = 0;
	int speed = 500;

	Rabbits rabbits;

	WolfW wolfW;
	vector<WolfW> wolfWs;
	int count_of_wolfW;

	WolfM wolfM;
	vector<WolfM> wolfMs;
	int count_of_wolfM;

	bool restart;

public:
	Game();

	bool isRestart();

	void start();

	~Game();
};

