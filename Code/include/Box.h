#ifndef BOX_H
#define BOX_H
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Box : public Drawable
{
    private:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	    Color colour = Color::Red;
        int x = 200;
        int y = 100;
        int stop = 400;

	public:
	    Box();
        Box(int x,int y,sf::Color color);
        RectangleShape box;
	    void move();
        bool canMove();
    void move(int nr);
};
#endif //BOX_H
