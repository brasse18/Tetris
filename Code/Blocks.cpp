#include "include/Blocks.h"
#include "include/Box.h"
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

Blocks::Blocks()
{
    box[0] = Box(startX,startY,sf::Color::Blue);
    box[1] = Box(startX+50,startY,sf::Color::Blue);
    box[2] = Box(startX,startY+50,sf::Color::Blue);
    box[3] = Box(startX+50,startY+50,sf::Color::Blue);
}

void Blocks::delBlox()
{

}

void Blocks::onLine(int nr)
{

}

void Blocks::move()
{
    if (canMove())
    {
        for (int i=0;i<nrOfBox;i++)
        {
            box[i].move();
        }
    }
}

void Blocks::move(int nr)
{
    if (canMove(nr))
    {
        for (int i = 0; i < nrOfBox; i++) {
            box[i].move(nr);
        }
    }
}

void Blocks::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for (int i=0;i<nrOfBox;i++)
    {
        target.draw(box[i]);
    }
}

bool Blocks::canMove()
{
    bool anser = true;
    for (int i=0;i<nrOfBox;i++)
    {
        anser = box[i].canMove();
    }
    return anser;
}

bool Blocks::canMove(int nr)
{
    bool anser = true;
    for (int i=0;i<nrOfBox;i++)
    {
        if(anser)
        {
            anser = box[i].canMove(nr);
        }
    }
    return anser;
}
