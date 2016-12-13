#ifndef BLOCKS_H
#define BLOCKS_H
#include <string>
#include "SFML/Graphics.hpp"
#include "Box.h"

using namespace std;
using namespace sf;

class Blocks : public Drawable
{
<<<<<<< HEAD
    public:
	    Blocks();
        void delBlox();
        void onLine(int nr);
        void move();
        void move(int nr);
        bool canMove();
        bool canMove(int nr);
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	private:
        Box box[4];
        int nrOfBox = 4;
        int startX = 9;
        int startY = 0;

=======
public:
    Blocks();
    void delBlox();
    void onLine(int nr);
    void move();
    void move(int nr);
    bool canMove();
    bool canMove(int nr);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    void rotate();
private:
    int nrOfBox = 4;
protected:
    Box box[4];
    int posX[4][4];
    int posY[4][4];
    int rotateStat = 0;
    int startX = 9;
    int startY = 0;
>>>>>>> development
};
#endif //BLOCKS_H
