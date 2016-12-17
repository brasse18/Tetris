#include <iostream>
#include "include/Box.h"
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

Box::Box()
{
    box.setSize(Vector2f(40.0,40.0));
    box.setFillColor(this->colour);
}

void Box::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    if (isDel == false)
    {
        target.draw(box);
    }
}

void Box::move()
{
    if (isDel == false) {
        if (canMove()) {
            box.move(0, 0.08);
        }
    }
}

void Box::move(int nr)
{
    if (isDel == false) {
        int x = nr * 50;
        if (canMove(nr)) {
            box.setPosition(box.getPosition().x + x, box.getPosition().y);
        }
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
    if (isDel == false)
    {
        if (box.getPosition().y + 50 >= stop) {
            anser = false;
        }
    }
    return anser;
}

bool Box::canMove(int nr)
{
    bool anser = true;
    x = nr*50;
    if (isDel == false) {
        if (box.getPosition().y + 50 >= stop) {
            anser = false;
        } else {
            if (x > 0) {
                if (box.getPosition().x + x >= 300) {
                    anser = false;
                }
            } else {
                if (box.getPosition().x + x <= 0) {
                    anser = false;
                }
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
}

bool Box::onPos(int line,int row)
{
    bool anser = false;
    if (box.getPosition().x-5 == row*50 && box.getPosition().y == line)
    {
        anser = true;
    }
    return anser;
}

bool Box::onLine(int line)
{
    bool anser = false;
    if (box.getPosition().y+50 >= line*50)
    {
        anser = true;
    }
    return anser;
}

void Box::del()
{
    isDel = true;
}
