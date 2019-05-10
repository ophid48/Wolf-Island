#include "Animal.h"
class WolfW :
	public Animal
{
	
	Texture texture_of_wolf_w;
	Sprite wolf_w;
	double score;
public:
	WolfW();
	//Если волчица и кролик оказываются в одном квадрате,
	//волчица съедает кролика и получает одно очко
	void getCoord(vector<WolfW> &wolfWs);

	double getScore();

	void setScore(double score);

	// если кролик находится в одном квадрате с волчицой, то он умирает
	// иначе она теряет 0.1 очка
	void eatRabbits(vector<Sprite> &rabbits, int x, int y);

	// удаляет все объекты, которые находятся в данных координатах
	void deleteAnimal(vector<WolfW>& animals, int dx, int dy);

	// возвращает вектор переменных типа Sprite, соторый состоит из спрайтов волчиц
	vector<Sprite> getVectorOfSprite(vector<WolfW> &wolfW);
	
	// возвращает ссылку на поле "wolf_m" типа Sprite
	Sprite& getSprite();

	// возвращает позицию ближайшего кролика
	// если его нет, то возвращает (-1, -1)
	Vector2f Hunting(vector<Sprite> rabbits, int x, int y);

	~WolfW();
};
