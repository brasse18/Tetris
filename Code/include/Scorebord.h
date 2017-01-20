#ifndef SCOREBORD_H
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

const static int tempPlayer = 3;

class Scorebord
{
private:
    string name[4];
    int points[4];
public:
    Scorebord();
    void addPoint(int player,int point);
    int  getPoint(int player);
    string allToString();
    void save();
    void load();
    void setPlayer(string name);
    void sortScorebord();
};
#endif
