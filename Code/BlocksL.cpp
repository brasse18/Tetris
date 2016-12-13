//
// Created by brasse on 12/12/16.
//

#include "include/BlocksL.h"
#include <iostream>

BlocksL::BlocksL()
{
    box[0] = Box(startX,startY,sf::Color::Green);
    box[1] = Box(startX,startY+50,sf::Color::Green);
    box[2] = Box(startX,startY+100,sf::Color::Green);
    box[3] = Box(startX+50,startY+100,sf::Color::Green);
    int x[4][4] = {{ 0, 1, 2, 1},  {1, 0,-1,-2},   { 1, 0,-1, 0},  {-2,-1, 0, 1}};
    int y[4][4] = {{ 2, 1, 0,-1},  {0,-1,-2,-1},   {-1, 0, 1, 2},  {-1, 0, 1, 0}};
    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            posX[i][e]=x[i][e];
            posY[i][e]=y[i][e];
        }
    }
}
