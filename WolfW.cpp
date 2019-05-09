#include "WolfW.h"



WolfW::WolfW()
{
}

void WolfW::getCoord(vector<WolfW> &wolfWs) {
	for (int i = 0; i < wolfWs.size(); i++) {
		cout << i + 1 << ")\n x: " << wolfWs[i].wolf_w.getPosition().x << "\n y: " << wolfWs[i].wolf_w.getPosition().y << endl <<
			" scores: " << wolfWs[i].getScore() << endl;
	}
}

double WolfW::getScore() {
	return score;
}

void WolfW::setScore(double score) {
	this->score = score;
}

void WolfW::eatRabbits(vector<Sprite> &rabbits, int x, int y) {
	// был ли съеден кролик
	bool flag = 0;
	for (int i = 0; i < rabbits.size(); i++) {
		if (rabbits[i].getGlobalBounds().contains(x, y)) {
			this->score += 1;
			flag = 1;
			rabbits.erase(rabbits.begin() + i);
		}
	}
	if (flag == 0 || rabbits.size() == 0) score -= 0.1;
}

void WolfW::deleteAnimal(vector<WolfW>& animals, int dx, int dy) {
	for (int i = 0; i < animals.size(); i++) {
		if (animals[i].getSprite().getGlobalBounds().contains(dx, dy)) {
			animals.erase(animals.begin() + i);
		}
	}
}

vector<Sprite> WolfW::getVectorOfSprite(vector<WolfW> &wolfW) {
	vector<Sprite> sprites;
	for (int i = 0; i < wolfW.size(); i++) {
		sprites.push_back(wolfW[i].getSprite());
	}
	return sprites;
}

Sprite& WolfW::getSprite() {
	return wolf_w;
}


Vector2f WolfW::Hunting(vector<Sprite> rabbits, int x, int y) {
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

WolfW::~WolfW()
{
}
