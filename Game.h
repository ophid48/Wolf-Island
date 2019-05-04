#pragma once
#include "WolfM.h"
#include "WolfW.h"
#include "Rabbit.h"
#include "Animal.h"
#include <ctime>
#include <iostream>
#include <string>
class Game
{
	bool isStart = 1;
	int speed = 700;
	Rabbits rabbits;
	WolfWs wolf_ws;
public:
	Game();



	void start() {
		srand(time(NULL));

		rabbits.setTexture();
		rabbits.addRabbit();
		rabbits.setPosition();

		wolf_ws.setTexture();
		wolf_ws.addWolfW();

		Sprite background;
		Texture texture_of_background;
		texture_of_background.loadFromFile("images/background_2.png");
		background.setTexture(texture_of_background);

		Font font;//шрифт 
		font.loadFromFile("font/arial.ttf");//передаем нашему шрифту файл шрифта
		Text text(to_string(speed), font, 16);//создаем объект текст. закидываем в объект текст строку, шрифт, размер шрифта(в пикселях)
		text.setPosition(71, 15);//задаем позицию текста



		RenderWindow window(sf::VideoMode(1000, 1050), "Island");
		while (window.isOpen()) {
			Event event;
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
							// обновляем строку со скоростью
							text.setString(to_string(speed));
							cout << speed << endl;
						}
						else if (pos.x >= 140 && pos.x <= 159 && pos.y >= 16 && pos.y <= 35 && speed > 0) {
							speed -= 100;
							// обновляем строку со скоростью
							text.setString(to_string(speed));
							cout << speed << endl;
						}

				if (event.type == sf::Event::KeyPressed &&
					event.key.code == sf::Keyboard::Escape ||
					event.type == event.Closed)
					window.close();

				if (event.type == Event::KeyPressed &&
					event.key.code == Keyboard::F) {
					cout << "Rabbits:" << endl;
					rabbits.getCoord();
					cout << "Wolf_ws:" << endl;
					wolf_ws.getCoord();
				}
			}
			
			if (isStart) {
				for (int i = 0; i < rabbits.getVectorOfRabbits().size(); i++) {
					int random = rand() % 9 + 1;
					rabbits.move(rabbits.getVectorOfRabbits()[i], random);
				}
				for (int i = 0; i < wolf_ws.getVectorOfWolfWs().size(); i++) {
					int random = rand() % 8 + 1;
					rabbits.move(wolf_ws.getVectorOfWolfWs()[i], random);
				}
				sleep(milliseconds(900 - speed));
				rabbits.birth();
			}
			window.clear();
			window.draw(background);
			window.draw(text);
			for (int i = 0; i < wolf_ws.getVectorOfWolfWs().size(); i++) {
				window.draw(wolf_ws.getVectorOfWolfWs()[i]);
			}
			for (int i = 0; i < rabbits.getVectorOfRabbits().size(); i++) {
				window.draw(rabbits.getVectorOfRabbits()[i]);
			}
			window.display();
		}
	}
	~Game();
};

