//
// Created by brasse on 12/12/16.
//

#include "include/BlocksT.h"
#include <iostream>

BlocksT::BlocksT()
{
    setBox(Box(getStartX(),      getStartY(),    sf::Color::Yellow),0);
    setBox(Box(getStartX()+50,   getStartY(),    sf::Color::Yellow),1);
    setBox(Box(getStartX()+100,  getStartY(),    sf::Color::Yellow),2);
    setBox(Box(getStartX()+50,   getStartY()+50, sf::Color::Yellow),3);
    int x[4][4] = {{ 1, 0,-1, 1},  { 1, 0,-1,-1},   {-1, 0, 1,-1},  {-1, 0, 1, 1}};
    int y[4][4] = {{ 1, 0,-1,-1},  {-1, 0, 1,-1},   {-1, 0, 1, 1},  { 1, 0,-1, 1}};
    for (int i=0;i<4;i++)
    {
        for (int e=0;e<4;e++)
        {
            setPosX(i,e,x[i][e]);
            setPosY(i,e,y[i][e]);
        }
    }
}
