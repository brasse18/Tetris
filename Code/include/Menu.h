#ifndef MENU_H
#include <SFML/Graphics.hpp>
#include "string"

using namespace std;
using namespace sf;

class Menu : public Drawable
{
<<<<<<< HEAD
	private:
        Font font;
        Text menuExitText;
        Text menuFullscreenText;
        Text menuStartText;
        bool isFullscreen = false;
        bool gameStart = false;
		int menuMod = 0; //0=Start menu 1=RunGameMenu 2=InGameMenu
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	public:
		Menu();
        bool getFulscreen();
        void switchFulscreen();
        bool getStart();
        void update(Event &event,RenderWindow &window);
        void MouseButtonPressed(Event &event,RenderWindow &window);
        bool isClickt(Text text,int x,int y);
=======
private:
    Font font;
    Text menuExitText;
    Text menuFullscreenText;
    Text menuQuitGameText;
    Text menuStartText;
    bool isFullscreen = false;
    bool gameStart = false;
    bool quitGame = false;
    Vector2i mous;
    int menuMod = 0; //0=Start menu 1=RunGameMenu 2=InGameMenu
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
public:
	Menu();
    void setMenuMod(int nr);
    bool getFulscreen();
    void switchFulscreen();
    bool getStart();
    bool getGameQuit();
    void update(Event &event,RenderWindow &window);
    void MouseButtonPressed(Event &event,RenderWindow &window);
    bool isClickt(Text text,Vector2i);
>>>>>>> development
};
#endif
