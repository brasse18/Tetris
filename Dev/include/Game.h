#ifndef GAME_HPP
#define GAME_HPP
#include <string>
#include <SFML/Graphics.hpp>
#include "Playfild.h"
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;

static const int moveLeft = -1;
static const int moveRight = 1;

class Game : public Drawable
{
public:
	Game();
    int nrOfBlocks = 1;
    Playfild playfild;
    void gameRound();
    void Update(Event &event,RenderWindow &window);
    void KeyPressed(Event event);
    void startMusic();
    void stopMusic();
    bool isMusicPlayeng();
	void quitGame();
private:
    Clock clock;
    Music music;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    
};
#endif
