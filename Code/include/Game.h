#ifndef GAME_H
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Game
{
	private:
	int setings[2];
	public:
	Game();
    RenderWindow mWindow;
	void gameRound();
	void endGame();
    void update();
    void draw();
};
#endif
