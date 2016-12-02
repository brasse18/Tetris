#include "include/Box.h"
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

Box::Box()
{
    box.setPosition(x,y);
    box.setSize(Vector2f(50.0,50.0));
    box.setFillColor(colour);
}

void Box::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(box);
}

void Box::move()
{
    box.move(0,0.02);
}
