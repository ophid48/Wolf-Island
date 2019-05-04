#include <iostream>
#include <ctime>
#include <random>
#include <string>

#include "Game.h"

using namespace sf;
using namespace std;





int main()
{

	//Font font;//шрифт
	//font.loadFromFile("font/arial.ttf");//ïåðåäàåì íàøåìó øðèôòó ôàéë øðèôòà
	//Text text("", font, 16);//ñîçäàåì îáúåêò òåêñò. çàêèäûâàåì â îáúåêò òåêñò ñòðîêó, øðèôò, ðàçìåð øðèôòà(â ïèêñåëÿõ);//ñàì îáúåêò òåêñò (íå ñòðîêà)
	//text.setPosition(71, 15);//çàäàåì ïîçèöèþ òåêñòà


	//srand(time(NULL));
	//sf::RenderWindow window(sf::VideoMode(1000, 1050), "Island");
	//Texture texture;
	//Texture texture_of_rabbit;

	//texture.loadFromFile("images/background_2.png");
	//Sprite background;
	//background.setTexture(texture);

	//texture_of_rabbit.loadFromFile("images/rabbit.png");
	//Sprite rabbit;
	//rabbit.setTexture(texture_of_rabbit);
	//rabbit.setPosition(Vector2f(451, 551));
	//rabbits.push_back(rabbit);

	//bool isStart = 1;
	//int speed = 200;
	//while (window.isOpen())
	//{
	//	

	//	sf::Event event;
	//	Vector2i pos = Mouse::getPosition(window);//çàáèðàåì êîîðäèíàòû êóðñîðà
	//	
	//	
	//	while (window.pollEvent(event))
	//	{
	//		// êíîïêè ñòàðò è ñòîï
	//		if (event.type == Event::MouseButtonPressed)//åñëè íàæàòà êëàâèøà ìûøè
	//			if (event.key.code == Mouse::Left)//à èìåííî ëåâàÿ
	//				if (pos.x >= 350 && pos.x <= 450 && pos.y >= 0 && pos.y <= 50) {
	//					isStart = 1;
	//				}
	//				else if (pos.x >= 550 && pos.x <= 650 && pos.y >= 0 && pos.y <= 50) {
	//					isStart = 0;
	//				}
	//		
	//		// êíîïêè ðåãóëèðîâàíèÿ ñêîðîñòè
	//		if (event.type == Event::MouseButtonPressed)//åñëè íàæàòà êëàâèøà ìûøè
	//			if (event.key.code == Mouse::Left)//à èìåííî ëåâàÿ
	//				if (pos.x >= 110 && pos.x <= 129 && pos.y >= 16 && pos.y <= 35 && speed < 900) {
	//					speed += 100;
	//					cout << speed << endl;
	//				}
	//				else if (pos.x >= 140 && pos.x <= 159 && pos.y >= 16 && pos.y <= 35 && speed > 0) {
	//					speed -= 100;
	//					cout << speed << endl;
	//				}
	//		
	//		if (event.type == sf::Event::KeyPressed &&
	//			event.key.code == sf::Keyboard::Escape ||
	//			event.type == event.Closed)
	//			window.close();

	//		if (event.type == Event::KeyPressed &&
	//			event.key.code == Keyboard::F) {
	//			cout << rabbit.getPosition().x << endl;
	//			cout << rabbit.getPosition().y << endl;
	//			cout << endl;
	//		}
	//	}

	//	text.setString(to_string(speed));//çàäàåò ñòðîêó òåêñòó

	//	if (isStart) {
	//		for (int i = 0; i < rabbits.size(); i++) {
	//			int random = rand() % 9 + 1;
	//			moveRabbit(rabbits[i], random, 1);
	//		}
	//		sleep(milliseconds(speed));
	//	}

	//	window.clear();
	//	window.draw(background);
	//	window.draw(text);
	//	for (int i = 0; i < rabbits.size(); i++) {
	//		window.draw(rabbits[i]);
	//	}
	//	window.display();
	//}

	Game game;
	game.start();

	return 0;
}
