#ifndef SCOREBORD_H
#include "Player.h"
#include <fstream>
#include <string>

using namespace std;

class Scorebord
{
private:
    Player* players;
public:
    Scorebord();
    void addPlayer(string name);
    void save();
    void load();
};
#endif
