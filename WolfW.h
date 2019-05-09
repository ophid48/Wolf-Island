#include "Animal.h"
class WolfW :
	public Animal
{
	
	Texture texture_of_wolf_w;
	Sprite wolf_w;
	double score;
public:
	WolfW();

	void getCoord(vector<WolfW> &wolfWs);

	double getScore();

	void setScore(double score);

	// ���� ������ ��������� � ����� �������� � ��������, �� �� �������
	// ����� ��� ������ 0.1 ����
	void eatRabbits(vector<Sprite> &rabbits, int x, int y);

	// ������� ��� �������, ������� ��������� � ������ �����������
	void deleteAnimal(vector<WolfW>& animals, int dx, int dy);

	// ���������� ������ ���������� ���� Sprite, ������� ������� �� �������� ������
	vector<Sprite> getVectorOfSprite(vector<WolfW> &wolfW);
	
	// ���������� ������ �� ���� "wolf_m" ���� Sprite
	Sprite& getSprite();

	// ���������� ������� ���������� �������
	// ���� ��� ���, �� ���������� (-1, -1)
	Vector2f Hunting(vector<Sprite> rabbits, int x, int y);

	~WolfW();
};
