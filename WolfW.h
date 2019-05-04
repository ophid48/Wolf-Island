
#include "Animal.h"
class WolfWs :
	public Animal
{
	Texture texture_of_wolf_w;
	Sprite wolf_w;
	vector<Sprite> wolfWs;
public:
	WolfWs();

	void getCoord() {
		for (int i = 0; i < wolfWs.size(); i++) {
			cout << i + 1 << ")\n x: " << wolfWs[i].getPosition().x << "\n y: " << wolfWs[i].getPosition().y << endl;
		}
	}

	void addWolfW() {
		wolf_w.setPosition(getRandomPosition());
		wolfWs.insert(wolfWs.begin(), wolf_w);
	}

	vector<Sprite>& getVectorOfWolfWs() {
		return wolfWs;
	}

	bool isHunting(); //TODO

	void setTexture() {
		texture_of_wolf_w.loadFromFile("images/wolf_1.png");
		wolf_w.setTexture(texture_of_wolf_w);
	}
	~WolfWs();
};
