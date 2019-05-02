#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1050), "Island");
	Texture texture;
	Texture texture1;

	texture.loadFromFile("images/background.png");
	Sprite background;
	background.setTexture(texture);

	texture1.loadFromFile("images/rabbit.png");
	Sprite rabbit;
	rabbit.setTexture(texture1);
	rabbit.setPosition(Vector2f(1, 51));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed &&
				event.key.code == sf::Keyboard::Escape ||
				event.type == event.Closed)
				window.close();
			if (event.type == Event::KeyPressed &&
				event.key.code == Keyboard::W   &&
				rabbit.getPosition().y>51 )
				rabbit.move(0, -50);
			if (event.type == Event::KeyPressed &&
				event.key.code == Keyboard::S &&
				rabbit.getPosition().y < 952)
				rabbit.move(0, 50);
			if (event.type == Event::KeyPressed &&
				event.key.code == Keyboard::A && 
				rabbit.getPosition().x > 1)
				rabbit.move(-50, 0);
			if (event.type == Event::KeyPressed &&
				event.key.code == Keyboard::D && 
				rabbit.getPosition().x < 951)
				rabbit.move(50, 0);
		}

		

		window.clear();
		window.draw(background);
		window.draw(rabbit);
		window.display();
	}

	return 0;
}