#ifndef PLAYFILD_H
#include <string>
#include "Blocks.h"
#include "BlocksI.h"
#include "BlocksL.h"
#include "BlocksT.h"
#include "BlocksS.h"
#include "Scorebord.h"
#include <stdlib.h>

using namespace std;

const static int empty = -1;

class Playfild : public Drawable
{
public:
	Playfild();
    void moveDown();
    void moveToSide(int nr);
    void spanBlocks();
    void span();
    bool canMoveDown(int block);
    bool canMoveToSide(int nr,int block);
    void rotateBlocks();
    void fullLine();
    void delLine(int line);
    void quitGame();
    void updateMap();
    void playRound();
    void point();
    void gameOver();
    bool canSpan();
    void setName(string name);
    void save();

private:
    Scorebord scorebord;
    Font font;
    Text score;
    Text scorebordTest;
    Text gameOverText;
    bool isGameOver;
    int map[6][8];
    Vector2i size;
    int randBlock;
    int acktivBlock;
    int nrOfBlocks;
	Blocks* blocks;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    RectangleShape playfild;

};
#endif
