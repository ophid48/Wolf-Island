#include "Animal.h"



Animal::Animal()
{
}


void Animal::move(Sprite &animal, int random) {
	switch (random)
	{
	case 1: {
		if (animal.getPosition().x > 1 && animal.getPosition().y > 51)
			animal.move(-50, -50);
		break;
	}
	case 2: {
		if (animal.getPosition().y > 51)
			animal.move(0, -50);
		break;
	}
	case 3: {
		if (animal.getPosition().x < 951 && animal.getPosition().y > 51)
			animal.move(50, -50);
		break;
	}
	case 4: {
		if (animal.getPosition().x < 951)
			animal.move(50, 0);
		break;
	}
	case 5: {
		if (animal.getPosition().x < 951 && animal.getPosition().y < 952)
			animal.move(50, 50);
		break;
	}
	case 6: {
		if (animal.getPosition().y < 952)
			animal.move(0, 50);
		break;
	}
	case 7: {
		if (animal.getPosition().x > 1 && animal.getPosition().y < 952)
			animal.move(-50, 50);
		break;
	}
	case 8: {
		if (animal.getPosition().x > 1)
			animal.move(-50, 0);
		break;
	}
	default:
		break;
	}
}


Vector2f Animal::getRandomPosition() {
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

Animal::~Animal()
{
}
