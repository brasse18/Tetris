#ifndef BOX_H
#define BOX_H
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Box : public Drawable
{
private:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	Color colour = Color::Red;
	int x = 200;
	int y = 100;
	int stop = 400;
    bool isDel = false;

public:
	Box();
	Box(int x,int y,sf::Color color);
    bool onPos(int line,int row);
	RectangleShape box;
    bool onLine(int line);
    void del();
	void move();
	bool canMove();
	bool canMove(int nr);
	void move(int nr);
	void move(int x, int y);
};
#endif //BOX_H
