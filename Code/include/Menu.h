#ifndef MENU_H
#include <SFML/Graphics.hpp>
#include "string"

using namespace std;
using namespace sf;

class Menu : public Drawable
{
	private:
        Font font;
        Text menuExitText;
        Text menuFullscreenText;
        Text menuStartText;
        bool isFullscreen = false;
        bool gameStart = false;
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	public:
		Menu();
        bool getFulscreen();
        void switchFulscreen();
        bool getStart();
        void update(RenderWindow &window,int x,int y);
};
#endif