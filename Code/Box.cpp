#include <iostream>
#include "include/Box.h"
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

Box::Box()
{
    box.setOutlineColor(sf::Color::Black);
    box.setOutlineThickness(3);
    box.setSize(Vector2f(47.0,47.0));
    box.setFillColor(this->colour);
}

void Box::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(box);
}

void Box::move()
{
    if (canMove())
    {
        box.move(0,0.02);
    }

}

void Box::move(int nr)
{
    int x = nr*50;
    if (canMove(nr))
    {
        box.setPosition(box.getPosition().x + x,box.getPosition().y);
    }
}

Box::Box(int x, int y,sf::Color color)
{
    this->x = x;
    this->y = y;
    this->colour = color;
    box.setOutlineColor(sf::Color::Black);
    box.setOutlineThickness(3);
    box.setPosition(this->x,this->y);
    box.setSize(Vector2f(47.0,47.0));
    box.setFillColor(this->colour);
}

bool Box::canMove()
{
    bool anser = true;

    if (box.getPosition().y+50 >= stop)
    {
        anser = false;
    }

    return anser;
}

bool Box::canMove(int nr)
{
    bool anser = true;
    x = nr*50;
    if (box.getPosition().x+nr >= 400)
    {
        anser = false;
    }

    return anser;
}
