#ifndef PLAYFILD_H
#include <string>
#include "Blocks.h"
#include "BlocksL.h"
#include "BlocksT.h"
#include "BlocksS.h"
#include <stdlib.h>

using namespace std;

class Playfild : public Drawable
{
public:
	Playfild();
    void move();
    void move(int nr);
    void spanBlocks();
    void span();
    bool canMove();
    void rotateBlocks();
    bool fullLine();
    void delLine(int line);
    void quitGame();
    RectangleShape playfild;

private:
    int map[6][8];
    Vector2i size = Vector2i(6,8);
    int randBlock = rand() % 4 + 1;
    int** grid = new int*[size.x];
    int acktivBlock = 1;
    int nrOfBlocks = 4;
	Blocks* blocks = new Blocks[nrOfBlocks];
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
#endif
