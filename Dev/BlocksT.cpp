//
// Created by brasse on 12/12/16.
//

#include "include/BlocksT.h"
#include <iostream>

BlocksT::BlocksT()
{
    box[0] = Box(startX,startY,sf::Color::Yellow);
    box[1] = Box(startX+50,startY,sf::Color::Yellow);
    box[2] = Box(startX+100,startY,sf::Color::Yellow);
    box[3] = Box(startX+50,startY+50,sf::Color::Yellow);
    int x[4][4] = {{ 1, 0,-1, 1},  { 1, 0,-1,-1},   {-1, 0, 1,-1},  {-1, 0, 1, 1}};
    int y[4][4] = {{ 1, 0,-1,-1},  {-1, 0, 1,-1},   {-1, 0, 1, 1},  { 1, 0,-1, 1}};
    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            posX[i][e]=x[i][e];
            posY[i][e]=y[i][e];
        }
    }
}
