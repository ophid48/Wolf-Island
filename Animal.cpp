#include "Animal.h"



Animal::Animal()
{
}

// функция для перемещения животного из центра области 3x3
// принимает первым аргументом объект для перемещения
// вторым аргументом целое число - номер квадрата:
//	1	2	3
//	8	9	4
//	7	6	5
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


Animal::~Animal()
{
}
