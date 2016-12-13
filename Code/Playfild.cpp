#include "include/Playfild.h"
#include "SFML/Graphics.hpp"
<<<<<<< HEAD

Playfild::Playfild()
{
    playfild.setPosition(5,5);
    playfild.setSize(Vector2f(305,400));
=======
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
>>>>>>> development
    playfild.setOutlineThickness(2);
    playfild.setOutlineColor(sf::Color::Magenta);
    playfild.setFillColor(sf::Color::Black);
}

void Playfild::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(playfild);
<<<<<<< HEAD
    for (int i=0;i<nrOfBlocks;i++)
=======
    for (int i=0;i<acktivBlock;i++)
>>>>>>> development
    {
        target.draw(blocks[i]);
    }
}

void Playfild::move()
{
<<<<<<< HEAD
    for (int i=0;i<nrOfBlocks;i++)
=======

    for (int i=0;i<acktivBlock;i++)
>>>>>>> development
    {
        blocks[i].move();
    }
}

void Playfild::move(int nr)
{
<<<<<<< HEAD
    for (int i=0;i<nrOfBlocks;i++)
    {
        blocks[i].move(nr);
    }
=======
    blocks[acktivBlock-1].move(nr);
>>>>>>> development
}

void Playfild::spanBlocks()
{
<<<<<<< HEAD
    if (nrOfBlocks+1 != 3)
    {
        nrOfBlocks++;
    }
}
=======
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

        switch (randBlock)
        {
            case 1:
                blocks[acktivBlock] = BlocksL();
                break;
            case 2:
                blocks[acktivBlock] = Blocks();
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
>>>>>>> development
