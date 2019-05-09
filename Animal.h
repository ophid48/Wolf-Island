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
	// ���������� ���� ��������� ��������� � ����
	Vector2f getRandomPosition();

	// ������� ��� ����������� ��������� �� ������ ������� 3x3
	// ��������� ������ ���������� ������ ��� �����������
	// ������ ���������� ����� ����� - ����� ��������:
	//	1	2	3
	//	8	9	4
	//	7	6	5
	void move(Sprite &, int);

	~Animal();
};

