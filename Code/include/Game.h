#ifndef GAME_H
#include <string>

using namespace std;

class Game
{
	private:
	int setings[2];
	public:
	Game();
	void gameRound();
	void endGame();
};
#endif
