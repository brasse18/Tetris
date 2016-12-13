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
        box.move(0,0.08);
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
    box.setPosition(x,y);
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
    if (box.getPosition().y+50 >= stop)
    {
        anser = false;
    } else
    {
        if (x > 0)
        {
            if (box.getPosition().x+x >= 300)
            {
                //cout << "position: " << box.getPosition().x << endl;
                anser = false;
            }
        } else
        {
            if (box.getPosition().x+x <= 0)
            {
                //cout << "position: " << box.getPosition().x << endl;
                anser = false;
            }
        }
    }


    return anser;
}

void Box::move(int mX, int mY)
{
    mX=mX*50;
    mY=mY*50;
    this->x = mX+box.getPosition().x;
    this->y = mY+box.getPosition().y;
    box.setPosition(x,y);
    //cout << "X:" << box.getPosition().x << " Y: " << box.getPosition().y << endl;
}
