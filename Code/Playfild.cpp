#include "include/Playfild.h"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <stdlib.h>

Playfild::Playfild()
{
    for (int i=0;i<size.x;i++)
    {
        grid[i] = new int[size.y];
    }
    blocks[1] = BlocksL();
    playfild.setPosition(3,0);
    playfild.setSize(Vector2f(size.x*50,size.y*50));
    playfild.setOutlineThickness(2);
    playfild.setOutlineColor(sf::Color::Magenta);
    playfild.setFillColor(sf::Color::Transparent);
}

void Playfild::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for (int i=0;i<acktivBlock;i++)
    {
        target.draw(blocks[i]);
    }
    target.draw(playfild);
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
        span();
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
        span();
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

void Playfild::delLine(int line)
{
    for (int i=0;i<nrOfBlocks;i++)
    {
        blocks[i].delBlox(line);
    }
}

bool Playfild::fullLine()
{
    bool anser = false;
    for (int i=0;i<nrOfBlocks;i++)
    {
        for (int row=0;row<8;row++)
        {
            for (int line=0;line<6;line++)
            {
                if (blocks[i].onPos(line,row))
                {
                    map[line][row] = 1;
                }
            }
        }
    }

    return anser;
}

void Playfild::span()
{
    randBlock = rand() % 5 + 1;
    switch (randBlock)
    {
        case 1:
            blocks[acktivBlock] = Blocks();
            break;
        case 2:
            blocks[acktivBlock] = BlocksL();
            break;
        case 3:
            blocks[acktivBlock] = BlocksT();
            break;
        case 4:
            blocks[acktivBlock] = BlocksS();
            break;
        case 5:
            blocks[acktivBlock] = BlocksI();
            break;
        default:
            break;
    }
}

