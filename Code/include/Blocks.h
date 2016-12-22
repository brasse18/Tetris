#ifndef BLOCKS_H
#define BLOCKS_H
#include <string>
#include "SFML/Graphics.hpp"
#include "Box.h"

using namespace std;
using namespace sf;

class Blocks : public Drawable
{
public:
    Blocks();
    void delBlox(int line);
    bool onPos(int line,int row);
    void move();
    void move(int nr);
    bool canMove();
    bool canMove(int nr);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void rotate();
    bool isOnPos(int x,int y);
private:
    int nrOfBox = 4;
protected:
    Box box[4];
    int posX[4][4] = {{ 0, 0, 0, 0},  {0, 0,0,0},   { 0, 0,0, 0},  {0,0, 0, 0}};
    int posY[4][4] = {{ 0, 0, 0, 0},  {0, 0,0,0},   { 0, 0,0, 0},  {0,0, 0, 0}};
    int rotateStat = 0;
    int startX = 5;
    int startY = 0;
};
#endif //BLOCKS_H
