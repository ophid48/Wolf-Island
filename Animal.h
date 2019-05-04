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
	Vector2f getRandomPosition() {
		Vector2f arr[20][20];
		int dx, dy{ 51 };
		for (int i = 0; i < 20; i++) {
			dx = 1;
			dy += 50;
			for (int j = 0; j < 20; j++) {
				arr[i][j] = Vector2f(dx, dy);
				dx += 50;
			}
		}
		return arr[rand() % 19 + 0][rand() % 19 + 0];
	}

	void move(Sprite &, int);
	~Animal();
};

