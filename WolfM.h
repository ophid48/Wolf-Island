#pragma once
#include "Animal.h"
class WolfM :
	public Animal
{
	Texture texture_of_wolf_m;
	Sprite wolf_m;
	double score;
public:
	WolfM();

	void getCoord(vector<WolfM> &wolfMs);

	double getScore();
	
	void setScore(double score);
	
	// возвращает ссылку на поле "wolf_m" типа Sprite
	Sprite& getSprite();

	// если кролик находится в одном квадрате с волком, то он умирает
	// иначе он теряет 0.1 очка
	void eatRabbits(vector<Sprite> &rabbits, int x, int y);

	// удаляет все объекты, которые находятся в данных координатах
	void deleteAnimal(vector<WolfM>& animals, int dx, int dy);

	// возвращает 1 если волк находится в одной клетке с волчицой 
	bool birth(vector<Sprite> wolfWs, int x, int y);

	// возвращает позицию ближайшей волчицы
	// если ее нет, то возвращает (-1, -1)
	Vector2f getPosOfWolfW(vector<Sprite> wolfWs, int x, int y);

	// возвращает позицию ближайшего кролика
	// если его нет, то возвращает (-1, -1)
	Vector2f Hunting(vector<Sprite> rabbits, int x, int y);

	~WolfM();
};

