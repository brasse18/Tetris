#include "include/Blocks.h"
#include "include/Box.h"
#include "SFML/Graphics.hpp"
#include <iostream>

using namespace std;
using namespace sf;

Blocks::Blocks()
{
    box[0] = Box(startX,startY,sf::Color::Blue);
    box[1] = Box(startX+50,startY,sf::Color::Blue);
    box[2] = Box(startX,startY+50,sf::Color::Blue);
    box[3] = Box(startX+50,startY+50,sf::Color::Blue);
}

void Blocks::delBlox(int line)
{
    for (int i=0;i<nrOfBox;i++)
    {
        if (box[i].onLine(line))
        {
            box[i].del();
        }
    }
}

bool Blocks::onPos(int line, int row)
{
    bool anser = false;
    for (int i=0;i<nrOfBox;i++)
    {
        if (box[i].onPos(line,row))
        {
            anser = true;
        }
    }
    return anser;
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
        for (int i = 0; i < nrOfBox; i++)
        {
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
        if (anser)
        {
            anser = box[i].canMove();
        }
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

void Blocks::rotate()
{

    box[0].move(posX[rotateStat][0],posY[rotateStat][0]);
    box[1].move(posX[rotateStat][1],posY[rotateStat][1]);
    box[2].move(posX[rotateStat][2],posY[rotateStat][2]);
    box[3].move(posX[rotateStat][3],posY[rotateStat][3]);
    if (rotateStat == 3)
    {
        rotateStat = 0;
    } else
    {
        rotateStat++;
    }
}