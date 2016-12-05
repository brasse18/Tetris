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
        void delBlox();
        void onLine(int nr);
        void move();
        void move(int nr);
        bool canMove();
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	private:
        Box box[4];
        int nrOfBox = 4;
        int startX = 10;
        int startY = 10;

};
#endif //BLOCKS_H
