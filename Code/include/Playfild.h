#ifndef PLAYFILD_H
#include <string>
#include "Bocks.h"

using namespace std;

class Playfild : public Drawable
{
	public:
		Playfild();
        void move();
        RectangleShape playfild;
	private:
		Blocks blocks[1];
		int nrOfBlocks = 1;
		virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
#endif
