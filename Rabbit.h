#pragma once
#include "Animal.h"
class Rabbit :
	public Animal
{
	Sprite rabbit;
	vector<Sprite> rabbits;
public:
	Rabbit();
	void moveRabbit(Sprite &rabbit, int random, float time);

	void addRabbit() {
		rabbits.insert(rabbits.begin(), rabbit);
	}

	void birth() {
		for (int i = 0; i < rabbits.size(); i++) {
			bool isRabbit = (rand() % 10 + 1) <= 2;// будет ли рождение кролика
			if (isRabbit && rabbits.size() < 100) {
				addRabbit();
				rabbits[0].setPosition(rabbits[i + 1].getPosition().x,
					rabbits[i + 1].getPosition().y);
				i += 1;
			}
		}
	}

	void setPosition() {
		this->x = 451;
		this->y = 551;
	}
	~Rabbit();
};

	