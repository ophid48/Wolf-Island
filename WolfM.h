#pragma once
#include "Animal.h"
class WolfM :
	public Animal
{
	Texture texture_of_wolf_m;
	Sprite wolf_m;
	double score;
public:
	WolfM();

	void getCoord(vector<WolfM> &wolfMs);

	double getScore();
	
	void setScore(double score);
	
	// ���������� ������ �� ���� "wolf_m" ���� Sprite
	Sprite& getSprite();

	// ���� ������ ��������� � ����� �������� � ������, �� �� �������
	// ����� �� ������ 0.1 ����
	void eatRabbits(vector<Sprite> &rabbits, int x, int y);

	// ������� ��� �������, ������� ��������� � ������ �����������
	void deleteAnimal(vector<WolfM>& animals, int dx, int dy);

	// ���������� 1 ���� ���� ��������� � ����� ������ � �������� 
	bool birth(vector<Sprite> wolfWs, int x, int y);

	// ���������� ������� ��������� �������
	// ���� �� ���, �� ���������� (-1, -1)
	Vector2f getPosOfWolfW(vector<Sprite> wolfWs, int x, int y);

	// ���������� ������� ���������� �������
	// ���� ��� ���, �� ���������� (-1, -1)
	Vector2f Hunting(vector<Sprite> rabbits, int x, int y);

	~WolfM();
};

