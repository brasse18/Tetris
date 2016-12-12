//
// Created by brasse on 12/12/16.
//

#include "include/BlocksL.h"

BlocksL::BlocksL()
{
    box[0] = Box(startX,startY,sf::Color::Green);
    box[1] = Box(startX,startY+50,sf::Color::Green);
    box[2] = Box(startX,startY+100,sf::Color::Green);
    box[3] = Box(startX+50,startY+100,sf::Color::Green);
}

void BlocksL::rotate()
{
    box[0].move(0,0);
    box[1].move(1,-1);
    box[2].move(2,-2);
    box[3].move(1,-1);
}
