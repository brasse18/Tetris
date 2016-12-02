#ifndef GAME_HPP
#define GAME_HPP
#include <string>
#include <SFML/Graphics.hpp>
#include "Box.h"

using namespace std;
using namespace sf;

class Game : public Drawable
{
	public:
		Game();
		~Game();
        Box mBox;
        RectangleShape box;
		void Update(float dt);
	private:
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    
};
#endif
