//
// Created by brasse on 12/12/16.
//

#ifndef TETRIS_BLOCKSL_H
#define TETRIS_BLOCKSL_H

#include "Blocks.h"
#include "Box.h"
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

class BlocksL : public Blocks {
public:
    BlocksL();
    void rotate();
};


#endif //TETRIS_BLOCKSL_H
