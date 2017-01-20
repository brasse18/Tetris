//
// Created by brasse on 12/12/16.
//

#include "include/BlocksL.h"
#include <iostream>

BlocksL::BlocksL()
{
    setBox(Box(getStartX(),   getStartY(),       sf::Color::Green),0);
    setBox(Box(getStartX(),   getStartY()+50,    sf::Color::Green),1);
    setBox(Box(getStartX(),   getStartY()+100,   sf::Color::Green),2);
    setBox(Box(getStartX()+50,getStartY()+100,   sf::Color::Green),3);
    int x[4][4] = {{ 0, 1, 2, 1},  {1, 0,-1,-2},   { 1, 0,-1, 0},  {-2,-1, 0, 1}};
    int y[4][4] = {{ 2, 1, 0,-1},  {0,-1,-2,-1},   {-1, 0, 1, 2},  {-1, 0, 1, 0}};
    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            setPosX(i,e,x[i][e]);
            setPosY(i,e,y[i][e]);
        }
    }
}
