#ifndef PLAYFILD_H
#include <string>
#include "Blocks.h"

using namespace std;

class Playfild : public Drawable
{
	public:
		Playfild();
        void move();
        void move(int nr);
        void spanBlocks();
        RectangleShape playfild;
	private:
		Blocks blocks[2];
		int nrOfBlocks = 1;
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
#endif
