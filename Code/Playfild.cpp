#include "include/Playfild.h"
#include "SFML/Graphics.hpp"

Playfild::Playfild()
{
    playfild.setPosition(5,5);
    playfild.setSize(Vector2f(300,400));
    playfild.setOutlineThickness(5);
    playfild.setOutlineColor(sf::Color::Magenta);
    playfild.setFillColor(sf::Color::Black);
}

void Playfild::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(playfild);
    for (int i=0;i<nrOfBlocks;i++)
    {
        target.draw(blocks[i]);
    }
}

void Playfild::move()
{
    for (int i=0;i<nrOfBlocks;i++)
    {
        blocks[i].move();
    }
}

void Playfild::move(int nr)
{
    for (int i=0;i<nrOfBlocks;i++)
    {
        blocks[i].move(nr);
    }
}
