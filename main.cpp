#include <iostream>
#include <random>
#include <vector>

using namespace std;

bool end_game;

class Game
{
private:
	const int width = { 20 }, heigth = { 20 };

	int x, y;
public:
	int wolf_M, wolf_F, rabbits;
	Game() : wolf_M(1), wolf_F(1), rabbits(1) {}
	Game(int w1, int w2, int r) : wolf_M(w1), wolf_F(w1), rabbits(r) {}
	void setup() {
		end_game = false;

	}
	void draw() {
		system("cls");
		for (int i = 0; i < width; i++)
			cout << '#';
		cout << endl;

		for (int i = 0; i < heigth; i++) {
			for (int j = 0; j < width; j++) {
				if (j == 0 || j == width - 1)
					cout << '#';
				else cout << ' ';
			}
			cout << endl;
		}

		for (int i = 0; i < width; i++)
			cout << '#';

	}
}game;


int main()
{
	game.setup();
	while (!end_game) {
		game.draw();
	}

}