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
    int x = 300;
    int y = 300;

	public:
	    Box();
        RectangleShape box;
	    void move();
};
#endif //BOX_H
