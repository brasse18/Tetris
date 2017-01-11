//
// Created by brasse on 12/12/16.
//

#include "include/BlocksS.h"
#include <iostream>

BlocksS::BlocksS()
{
    box[0] = Box(startX,startY,sf::Color::Red);
    box[1] = Box(startX+50,startY,sf::Color::Red);
    box[2] = Box(startX+50,startY+50,sf::Color::Red);
    box[3] = Box(startX+100,startY+50,sf::Color::Red);
    int x[4][4] = {{ 2, 1, 0,-1},  {-2,-1, 0, 1},   { 2, 1, 0,-1},  {-2,-1, 0, 1}};
    int y[4][4] = {{-1, 0,-1, 0},  { 1, 0, 1, 0},   {-1, 0,-1, 0},  { 1, 0, 1, 0}};

    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            posX[i][e]=x[i][e];
            posY[i][e]=y[i][e];
        }
    }
}
