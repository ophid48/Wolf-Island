#include "WolfM.h"


WolfM::WolfM() {

}


void WolfM::getCoord(vector<WolfM> &wolfMs) {
	for (int i = 0; i < wolfMs.size(); i++) {
		cout << i + 1 << ")\n x: " << wolfMs[i].wolf_m.getPosition().x << "\n y: " << wolfMs[i].wolf_m.getPosition().y << endl <<
			" scores: " << wolfMs[i].getScore() << endl;
	}
}

double WolfM::getScore() {
	return score;
}

void WolfM::setScore(double score) {
	this->score = score;
}

Sprite& WolfM::getSprite() {
	return wolf_m;
}

bool WolfM::eatRabbits(vector<Sprite> &rabbits, int x, int y) {
	// был ли съеден кролик
	bool flag = 0;
	for (int i = 0; i < rabbits.size(); i++) {
		if (rabbits[i].getGlobalBounds().contains(x, y)) {
			this->score += 1;
			flag = 1;
			rabbits.erase(rabbits.begin() + i);
		}
	}
	if (flag == 0 || rabbits.size() == 0) {
		score -= 0.1;
		return 0;
	}
	else if (flag == 1) {
		return 1;
	}
}

void WolfM::deleteAnimal(vector<WolfM>& animals, int dx, int dy) {
	for (int i = 0; i < animals.size(); i++) {
		if (animals[i].getSprite().getGlobalBounds().contains(dx, dy)) {
			animals.erase(animals.begin() + i);
		}
	}
}

bool WolfM::birth(vector<Sprite> wolfWs, int x, int y) {
	for (int i = 0; i < wolfWs.size(); i++) {
		if (wolfWs[i].getGlobalBounds().contains(x, y))
		{
			return 1;
		}
	}
	return 0;
}

Vector2f WolfM::getPosOfWolfW(vector<Sprite> wolfWs, int x, int y) {
	for (int i = 0; i < wolfWs.size(); i++) {
		if (wolfWs[i].getGlobalBounds().contains(x - 50, y - 50)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
		if (wolfWs[i].getGlobalBounds().contains(x, y - 50)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
		if (wolfWs[i].getGlobalBounds().contains(x + 50, y - 50)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
		if (wolfWs[i].getGlobalBounds().contains(x + 50, y)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
		if (wolfWs[i].getGlobalBounds().contains(x + 50, y + 50)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
		if (wolfWs[i].getGlobalBounds().contains(x, y + 50)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
		if (wolfWs[i].getGlobalBounds().contains(x - 50, y + 50)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
		if (wolfWs[i].getGlobalBounds().contains(x - 50, y)) {
			return Vector2f(wolfWs[i].getPosition().x, wolfWs[i].getPosition().y);
		}
	}
	return Vector2f(-1, -1);
}

Vector2f WolfM::Hunting(vector<Sprite> rabbits, int x, int y) {
	for (int i = 0; i < rabbits.size(); i++) {
		if (rabbits[i].getGlobalBounds().contains(x - 50, y - 50)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x, y - 50)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x + 50, y - 50)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x + 50, y)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x + 50, y + 50)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x, y + 50)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x - 50, y + 50)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x - 50, y)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
		if (rabbits[i].getGlobalBounds().contains(x, y)) {
			return Vector2f(rabbits[i].getPosition().x, rabbits[i].getPosition().y);
		}
	}
	return Vector2f(-1, -1);
}

WolfM::~WolfM()
{
}
