#pragma once
#include "Animal.h"
class Rabbits :
	public Animal
{
	Texture texture_of_rabbit;
	Sprite rabbit;
	vector<Sprite> rabbits;
public:
	Rabbits();

	void getCoord() {
		for (int i = 0; i < rabbits.size(); i++) {
			cout << i + 1 << ")\n x: " << rabbits[i].getPosition().x << "\n y: " << rabbits[i].getPosition().y << endl;
		}
	}

	void addRabbit() {
		rabbit.setPosition(Vector2f(451, 551));
		rabbits.insert(rabbits.begin(), rabbit);
	}

	void setTexture() {
		texture_of_rabbit.loadFromFile("images/rabbit.png");
		rabbit.setTexture(texture_of_rabbit);
	}

	vector<Sprite>& getVectorOfRabbits() {
		return rabbits;
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
		rabbits[0].setPosition(Vector2f(451, 551));
	}
	~Rabbits();
};

