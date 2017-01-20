//
// Created by brasse on 12/12/16.
//

#include "include/BlocksS.h"
#include <iostream>

BlocksS::BlocksS()
{
    setBox(Box(getStartX(),    getStartY(),     sf::Color::Red),0);
    setBox(Box(getStartX()+50, getStartY(),     sf::Color::Red),1);
    setBox(Box(getStartX()+50, getStartY()+50,  sf::Color::Red),2);
    setBox(Box(getStartX()+100,getStartY()+50,  sf::Color::Red),3);
    int x[4][4] = {{ 2, 1, 0,-1},  {-2,-1, 0, 1},   { 2, 1, 0,-1},  {-2,-1, 0, 1}};
    int y[4][4] = {{-1, 0,-1, 0},  { 1, 0, 1, 0},   {-1, 0,-1, 0},  { 1, 0, 1, 0}};

    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            setPosX(i,e,x[i][e]);
            setPosY(i,e,y[i][e]);
        }
    }
}
