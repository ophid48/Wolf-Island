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

	// ������� ��� �������, ������� ��������� � ������ �����������
	void deleteAnimal(vector<Sprite>& animals, int dx, int dy);

	// ��������� ������� � ������
	void addRabbit();

	void setTexture();

	vector<Sprite>& getVectorOfRabbits();

	// �������� ��������
	void birth();

	~Rabbits();
};

