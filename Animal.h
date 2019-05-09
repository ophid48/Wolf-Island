#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
using namespace std;
using namespace sf;
class Animal
{

public:
	Animal();
	// возвращает пару рандомных координат в поле
	Vector2f getRandomPosition();

	// функция для перемещения животного из центра области 3x3
	// принимает первым аргументом объект для перемещения
	// вторым аргументом целое число - номер квадрата:
	//	1	2	3
	//	8	9	4
	//	7	6	5
	void move(Sprite &, int);

	~Animal();
};

