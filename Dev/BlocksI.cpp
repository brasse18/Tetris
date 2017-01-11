//
// Created by brasse on 12/12/16.
//

#include "include/BlocksI.h"
#include <iostream>

BlocksI::BlocksI()
{
    box[0] = Box(startX,startY,sf::Color::Yellow);
    box[1] = Box(startX,startY+50,sf::Color::Yellow);
    box[2] = Box(startX,startY+100,sf::Color::Yellow);
    box[3] = Box(startX,startY+150,sf::Color::Yellow);
    int x[4][4] = {{ 3, 2, 1, 0},  {-3,-2,-1, 0},   { 3, 2, 1, 0},  {-3,-2,-1, 0}};
    int y[4][4] = {{ 3, 2, 1, 0},  {-3,-2,-1, 0},   { 3, 2, 1, 0},  {-3,-2,-1, 0}};

    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            posX[i][e]=x[i][e];
            posY[i][e]=y[i][e];
        }
    }
}
