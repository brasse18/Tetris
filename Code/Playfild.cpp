#include "include/Playfild.h"
#include "SFML/Graphics.hpp"
#include <iostream>

Playfild::Playfild()
{
    for (int i=0;i<size.x;i++)
    {
        grid[i] = new int[size.y];
    }
    blocks[1] = BlocksL();
    playfild.setPosition(5,5);
    playfild.setSize(Vector2f(size.x*50,size.y*50));
    playfild.setOutlineThickness(2);
    playfild.setOutlineColor(sf::Color::Magenta);
    playfild.setFillColor(sf::Color::Black);
}

void Playfild::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(playfild);
    for (int i=0;i<acktivBlock;i++)
    {
        target.draw(blocks[i]);
    }
}

void Playfild::move()
{

    for (int i=0;i<acktivBlock;i++)
    {
        blocks[i].move();
    }
}

void Playfild::move(int nr)
{
    blocks[acktivBlock-1].move(nr);
}

void Playfild::spanBlocks()
{
    acktivBlock++;
    if (acktivBlock != nrOfBlocks)
    {
        blocks[acktivBlock] = BlocksL();
    } else
    {
        Blocks* temp = new Blocks[nrOfBlocks*2];
        for (int i=0;i<nrOfBlocks;i++)
        {
            temp[i] = blocks[i];
        }
        delete [] blocks;
        blocks = temp;
        nrOfBlocks = nrOfBlocks*2;
        randBlock = rand() % 4 + 1;
        switch (randBlock)
        {
            case 1:
                blocks[acktivBlock] = BlocksL();
                break;
            case 2:
                blocks[acktivBlock] = Blocks();
                break;
            case 3:
                blocks[acktivBlock] = BlocksT();
                break;
            case 4:
                blocks[acktivBlock] = BlocksS();
                break;

            default:
                break;
        }
    }
}

void Playfild::rotateBlocks()
{
    blocks[acktivBlock-1].rotate();
}

bool Playfild::canMove() {
    return blocks[acktivBlock-1].canMove();
}

void Playfild::quitGame()
{
    delete [] blocks;
}
