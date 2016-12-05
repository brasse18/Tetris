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
    if (box.getPosition().y >= 400)
    {

    } else
    {
        box.move(0,0.02);
    }

}

void Box::move(int nr)
{
    if (box.getPosition().x > 100 && box.getPosition().x < 400)
    {

    } else
    {
        box.setPosition(box.getPosition().x + nr,box.getPosition().y);
    }

}
