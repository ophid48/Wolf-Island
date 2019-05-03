#include <iostream>
#include <ctime>
#include <random>
#include <string>


#include "Game.h"

using namespace sf;
using namespace std;


// функция для перемещения кролика из центра области 3x3
// принимает первым аргументом объект для перемещения
// вторым аргументом целое число - номер квадрата:
//	1	2	3
//	8	9	4
//	7	6	5


int main()
{

	Font font;//шрифт 
	font.loadFromFile("font/arial.ttf");//передаем нашему шрифту файл шрифта
	Text text("", font, 16);//создаем объект текст. закидываем в объект текст строку, шрифт, размер шрифта(в пикселях);//сам объект текст (не строка)
	text.setPosition(71, 15);//задаем позицию текста


	srand(time(NULL));
	sf::RenderWindow window(sf::VideoMode(1000, 1050), "Island");
	Texture texture;
	Texture texture_of_rabbit;

	texture.loadFromFile("images/background_2.png");
	Sprite background;
	background.setTexture(texture);

	texture_of_rabbit.loadFromFile("images/rabbit.png");
	vector<Sprite> rabbits;
	Sprite rabbit;
	rabbit.setTexture(texture_of_rabbit);
	rabbit.setPosition(Vector2f(451, 551));
	rabbits.push_back(rabbit);

	bool isStart = 1;
	int speed = 200;
	while (window.isOpen())
	{
		

		sf::Event event;
		Vector2i pos = Mouse::getPosition(window);//забираем координаты курсора
		
		
		while (window.pollEvent(event))
		{
			// кнопки старт и стоп
			if (event.type == Event::MouseButtonPressed)//если нажата клавиша мыши
				if (event.key.code == Mouse::Left)//а именно левая
					if (pos.x >= 350 && pos.x <= 450 && pos.y >= 0 && pos.y <= 50) {
						isStart = 1;
					}
					else if (pos.x >= 550 && pos.x <= 650 && pos.y >= 0 && pos.y <= 50) {
						isStart = 0;
					}
			
			// кнопки регулирования скорости
			if (event.type == Event::MouseButtonPressed)//если нажата клавиша мыши
				if (event.key.code == Mouse::Left)//а именно левая
					if (pos.x >= 110 && pos.x <= 129 && pos.y >= 16 && pos.y <= 35 && speed < 900) {
						speed += 100;
						cout << speed << endl;
					}
					else if (pos.x >= 140 && pos.x <= 159 && pos.y >= 16 && pos.y <= 35 && speed > 0) {
						speed -= 100;
						cout << speed << endl;
					}
			
			if (event.type == sf::Event::KeyPressed &&
				event.key.code == sf::Keyboard::Escape ||
				event.type == event.Closed)
				window.close();

			if (event.type == Event::KeyPressed &&
				event.key.code == Keyboard::F) {
				cout << rabbit.getPosition().x << endl;
				cout << rabbit.getPosition().y << endl;
				cout << endl;
			}
		}

		text.setString(to_string(speed));//задает строку тексту

		if (isStart) {
			for (int i = 0; i < rabbits.size(); i++) {
				int random = rand() % 9 + 1;
				moveRabbit(rabbits[i], random, 1);
			}
			sleep(milliseconds(speed));
		}

		window.clear();
		window.draw(background);
		window.draw(text);
		for (int i = 0; i < rabbits.size(); i++) {
			window.draw(rabbits[i]);
		}
		window.display();
	}

	return 0;
}