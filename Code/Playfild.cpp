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
    font.loadFromFile("font/OpenSans-Bold.ttf");
    gameOverText.setFont (font);
    gameOverText.setCharacterSize(11);
    gameOverText.setString("Game Over");
    gameOverText.setCharacterSize(55);
    gameOverText.setPosition(300,300);
}

void Playfild::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for (int i=0;i<=acktivBlock;i++)
    {
        target.draw(blocks[i]);
    }
    target.draw(playfild);
    if (isGameOver)
    {
        target.draw(gameOverText);
    }
}

void Playfild::moveDown()
{
    for (int i=0;i<acktivBlock;i++)
    {
        if (canMoveDown(i))
        {
            blocks[i].move();
        }
    }
}

void Playfild::moveToSide(int nr)
{
    if (canMoveToSide(nr,acktivBlock-1))
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

bool Playfild::canMoveDown(int block) {
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
            if (blocks[block].onPos(x,y-1))
            {
                if (map[x][y] != empty && map[x][y] != block)
                {
                    cout << "cant move map X: " << x << " Y: " << y << " = 1" << endl;
                    canMove = false;
                }
            }
        }
    }
    if (!blocks[block].canMove())
    {
        canMove = false;
    }
    //cout << "Block " << block << " " << canMove << endl;
    return canMove;
}

void Playfild::quitGame()
{
    delete [] blocks;
    isGameOver = false;
}

void Playfild::delLine(int line)
{
    bool deadBlock = true;
    for (int i=0;i<acktivBlock;i++)
    {
        blocks[i].delBlox(line);
    }
}

void Playfild::fullLine()
{
    bool fullLine = true;
    for (int y=0;y<8;y++)
    {
        fullLine = true;
        for (int x=0;x<6;x++)
        {
            if (map[x][y] == empty)
            {
                fullLine = false;
            }
        }
        if (fullLine)
        {
            delLine(y);
            point();
        }
    }
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
    for (int y=0;y<8;y++)
    {
        for (int x=0;x<6;x++)
        {
            map[x][y] = empty;
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
                    map[x][y] = i;
                }
            }
        }
    }

    for (int y=0;y<8;y++)
    {
        for (int x=0;x<6;x++)
        {
            if (map[x][y] == empty)
            {
                cout << "X";
            } else
            {
                cout << map[x][y];
            }
        }
        cout << endl;
    }
}

bool Playfild::canMoveToSide(int nr,int block)
{
    bool canMove = true;
    for (int y=0;y<8;y++)
    {
        for (int x=0;x<6;x++)
        {
            if (blocks[block].onPos(x+nr,y) && !map[x][y] == empty)
            {
                cout << "cant mov to the side " << nr << endl;
                canMove = false;
            }
        }
    }
    return canMove;
}

void Playfild::playRound()
{
    if (!isGameOver)
    {
        if (acktivBlock == 0)
        {
            spanBlocks();
        }
        updateMap();
        moveDown();
        if (!canMoveDown(acktivBlock-1))
        {
            if (canSpan())
            {
                spanBlocks();
            } else
            {
                gameOver();
            }
        }
        fullLine();
    }
}

void Playfild::point()
{
    cout << "POINT!!" << endl;
}

void Playfild::gameOver()
{
    for (int i=0;i<8;i++)
    {
        delLine(i);
    }
    isGameOver = true;
    cout << "Game end" << endl;
}

bool Playfild::canSpan()
{
    bool anser = true;
    for (int x=0;x<6;x++)
    {
        for (int i=0;i<nrOfBlocks-1;i++)
        {
            if (blocks[i].onPos(x,-1))
            {
                anser = false;
                cout << "Cant span block " << i << " on X: " << x << " Y: -1" << endl;
            }
        }
    }
    return anser;
}

