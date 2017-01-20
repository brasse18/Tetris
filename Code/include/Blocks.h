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
    bool isEmty();
    void span();
    int  getStartX();
    int  getStartY();
    void editRotation(int posX[],int posY[]);
    int  getRotationState();
    void setRotationStat(int rotation);
    int  getPosX(int line,int row);
    int  getPosY(int line,int row);
    void  setPosX(int line,int row,int nr);
    void  setPosY(int line,int row,int nr);
    void setBox(Box box,int nr);
private:
    int nrOfBox;
    int startX;
    int startY;
    int posX[4][4];
    int posY[4][4];
    int rotateStat;
    Box box[4];


};
#endif //BLOCKS_H
