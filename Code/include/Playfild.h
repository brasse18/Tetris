#ifndef PLAYFILD_H
#include <string>
#include "Blocks.h"
#include "BlocksL.h"

using namespace std;

class Playfild : public Drawable
{
	public:
		Playfild();
        void move();
        void move(int nr);
        void spanBlocks();
        void canMove();
        void rotateBlocks();
        RectangleShape playfild;
	private:
        Vector2i size = Vector2i(6,8);
        int** grid = new int*[size.x];
        int acktivBlock = 1;
        int nrOfBlocks = 4;
		Blocks* blocks = new Blocks[nrOfBlocks];
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
#endif
