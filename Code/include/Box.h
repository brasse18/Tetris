#ifndef BOX_H
#include <string>

using namespace std;
using namespace sf;

class Box
{
	private:
	int colour;
	int position[2] = {100,100};
	public:
    Sprite box;
	Box();
	void move();
};
#endif
