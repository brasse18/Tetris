#include "include/Playfild.h"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <stdlib.h>

Playfild::Playfild()
{
    playfild.setPosition(3,0);
    playfild.setSize(Vector2f(size.x*50,size.y*50));
    playfild.setOutlineThickness(2);
    playfild.setOutlineColor(sf::Color::Magenta);
    playfild.setFillColor(sf::Color::Transparent);
}

void Playfild::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for (int i=0;i<=acktivBlock;i++)
    {
        target.draw(blocks[i]);
    }
    target.draw(playfild);
}

void Playfild::moveDown()
{
    if (canMoveDown())
    {
        blocks[acktivBlock-1].move();
    }
    for (int i=0;i<acktivBlock-1;i++)
    {
        blocks[i].move();
    }
}

void Playfild::moveToSide(int nr)
{
    if (canMoveToSide(nr))
    {
        blocks[acktivBlock-1].move(nr);
    }
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

bool Playfild::canMoveDown() {
    bool canMove = true;

    if (acktivBlock == 0)
    {
        cout << "cant move (START)" << endl;
        canMove = false;
    }
    for (int y=0;y<8;y++)
    {
        for (int x=0;x<6;x++)
        {
            if (map[x][y-1] == 1)
            {
                for (int i=0;i<nrOfBlocks;i++)
                {
                    if (blocks[i].onPos(x,y))
                    {
                        cout << "cant move map = 1" << endl;
                        canMove = false;
                    }
                }
            }
        }
    }
    if (!blocks[acktivBlock-1].canMove())
    {
        cout << "aktive 2" << endl;
        canMove = false;
    }
    cout << canMove << endl;
    return canMove;
}

void Playfild::quitGame()
{
    delete [] blocks;
}

void Playfild::delLine(int line)
{
    bool deadBlock = true;
    for (int i=0;i<=acktivBlock;i++)
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
    blocks[acktivBlock-1].span();
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

void Playfild::updateMap()
{
    bool fullLine = true;

    for (int y=0;y<8;y++)
    {
        for (int x=0;x<6;x++)
        {
            map[x][y] = 0;
        }
    }

    for (int x=0;x<6;x++)
    {
        for (int y=0;y<8;y++)
        {
            for (int i=0;i<acktivBlock;i++)
            {
                if (blocks[i].onPos(x,y))
                {
                    if (acktivBlock-1 == i)
                    {
                        map[x][y] = 2;
                    } else
                    {
                        map[x][y] = 1;
                    }
                }
            }
        }
    }
    cout << endl;
    cout << endl;
    for (int y=0;y<8;y++)
    {
        for (int x=0;x<6;x++)
        {
            cout << map[x][y];
        }
        cout << endl;
    }

    for (int y=0;y<8;y++)
    {
        fullLine = true;
        for (int x=0;x<6;x++)
        {
            if (map[x][y] == 0)
            {
                fullLine = false;
            }
        }
        if (fullLine)
        {
            delLine(y);
        }
    }
}

bool Playfild::canMoveToSide(int nr)
{
    bool canMove = true;
    for (int y=0;y<8;y++)
    {
        for (int x=0;x<6;x++)
        {
            if (map[x+nr][y] == 1)
            if (blocks[acktivBlock-1].onPos(x,y))
            {
                cout << "cant mov to the side " << nr << endl;
                canMove = false;
            }
        }
    }
    return canMove;
}

