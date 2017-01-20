//
// Created by brasse on 12/12/16.
//

#include "include/BlocksI.h"
#include <iostream>

BlocksI::BlocksI()
{
    setBox(Box(getStartX(),getStartY(),    sf::Color::Yellow),0);
    setBox(Box(getStartX(),getStartY()+50, sf::Color::Yellow),1);
    setBox(Box(getStartX(),getStartY()+100,sf::Color::Yellow),2);
    setBox(Box(getStartX(),getStartY()+150,sf::Color::Yellow),3);
    int x[4][4] = {{ 3, 2, 1, 0},  {-3,-2,-1, 0},   { 3, 2, 1, 0},  {-3,-2,-1, 0}};
    int y[4][4] = {{ 3, 2, 1, 0},  {-3,-2,-1, 0},   { 3, 2, 1, 0},  {-3,-2,-1, 0}};

    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            setPosX(i,e,x[i][e]);
            setPosY(i,e,y[i][e]);
        }
    }
}
