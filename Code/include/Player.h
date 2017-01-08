#ifndef PLAYER_H
#include <string>

using namespace std;

class Player
{
private:
	string name;
	int point;
	int maxPoint;
public:
	Player();
	void addPoint(int point);
	int getPoint();
	int getMatPoint();
    void resetPoint();
    string playerToString();
};
#endif
