#ifndef GAME_HPP
#define GAME_HPP
#include <string>
#include <SFML/Graphics.hpp>
#include "Playfild.h"

using namespace std;
using namespace sf;

class Game : public Drawable
{
	public:
		Game();
        int nrOfBlocks = 1;
        Playfild playfild;
    void gameRound();
		void Update(float dt);
	private:
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    
};
#endif
