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

	void getCoord();

	// удаляет все объекты, которые находятся в данных координатах
	void deleteAnimal(vector<Sprite>& animals, int dx, int dy);

	// добавляет кролика в вектор
	void addRabbit();

	void setTexture();

	vector<Sprite>& getVectorOfRabbits();

	// рождение кроликов
	void birth();

	~Rabbits();
};

