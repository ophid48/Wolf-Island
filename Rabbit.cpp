#include "Rabbit.h"



Rabbit::Rabbit()
{
}

void Rabbit::moveRabbit(Sprite &rabbit, int random, float time) {
	switch (random)
	{
	case 1: {
		if (rabbit.getPosition().x > 1 && rabbit.getPosition().y > 51)
			rabbit.move(-50 * time, -50 * time);
		break;
	}
	case 2: {
		if (rabbit.getPosition().y > 51)
			rabbit.move(0, -50 * time);
		break;
	}
	case 3: {
		if (rabbit.getPosition().x < 951 && rabbit.getPosition().y > 51)
			rabbit.move(50, -50 * time);
		break;
	}
	case 4: {
		if (rabbit.getPosition().x < 951)
			rabbit.move(50 * time, 0);
		break;
	}
	case 5: {
		if (rabbit.getPosition().x < 951 && rabbit.getPosition().y < 952)
			rabbit.move(50 * time, 50 * time);
		break;
	}
	case 6: {
		if (rabbit.getPosition().y < 952)
			rabbit.move(0, 50 * time);
		break;
	}
	case 7: {
		if (rabbit.getPosition().x > 1 && rabbit.getPosition().y < 952)
			rabbit.move(-50 * time, 50 * time);
		break;
	}
	case 8: {
		if (rabbit.getPosition().x > 1)
			rabbit.move(-50 * time, 0);
		break;
	}
	default:
		break;
	}
}

Rabbit::~Rabbit()
{
}
