#include "Rabbit.h"



Rabbits::Rabbits()
{
}


void Rabbits::getCoord() {
	for (int i = 0; i < rabbits.size(); i++) {
		cout << i + 1 << ")\n x: " << rabbits[i].getPosition().x << "\n y: " << rabbits[i].getPosition().y << endl;
	}
}


void Rabbits::addRabbit() {
	rabbit.setPosition(getRandomPosition());
	rabbits.insert(rabbits.begin(), rabbit);
}

void Rabbits::deleteAnimal(vector<Sprite>& animals, int dx, int dy) {
	for (int i = 0; i < animals.size(); i++) {
		if (animals[i].getGlobalBounds().contains(dx, dy)) {
			animals.erase(animals.begin() + i);
		}
	}
}


void Rabbits::setTexture() {
	texture_of_rabbit.loadFromFile("images/rabbit.png");
	rabbit.setTexture(texture_of_rabbit);
}

vector<Sprite>& Rabbits::getVectorOfRabbits() {
	return rabbits;
}

void Rabbits::birth() {
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

// функция для перемещения кролика из центра области 3x3
// принимает первым аргументом объект для перемещения
// вторым аргументом целое число - номер квадрата:
//	1	2	3
//	8	9	4
//	7	6	5


Rabbits::~Rabbits()
{
	rabbits.clear();
}
