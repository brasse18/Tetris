#include "include/Scorebord.h"
#include <iostream>

using namespace std;

Scorebord::Scorebord()
{
    for (int i=0;i<4;i++)
    {
        points[i] = 0;
    }
    load();
}

void Scorebord::save()
{
    bool bigest = false;
    int tempPoint[2];
    string tempName[2];
    sortScorebord();
    ofstream myfile;
    myfile.open ("save.tetris");
    string out;
    for (int i=0;i<3;i++)
    {
        //out += name[i] + "\n";
        myfile << name[i] << "\n";
        //out += points[i] + "\n";
        myfile << points[i] << "\n";
    }
    //cout << out;
    //myfile << out;
    myfile.close();
}

void Scorebord::load()
{
    string line;
    int intPoint;
    ifstream myfile ("save.tetris");
    if (myfile.is_open())
    {
        //while ( getline (myfile,line) )
        //{
            for (int i=0;i<3;i++)
            {
                getline(myfile,line);
                name[i] = line;
                getline(myfile,line);
                stringstream convert(line);
                convert>>intPoint;
                points[i] = intPoint;
                //cout << line << '\n';
            }
        //}
        myfile.close();
    }
    else cout << "Unable to open file";

    // print score bord
    //for (int i=0;i<3;i++)
    //{
    //    cout << name[i] << endl;
    //    cout << points[i] << endl;
    //}
}

string Scorebord::allToString()
{
    string out;
    out += "Scorebord: \n";
    for (int i=0;i<3;i++)
    {
        out += name[i] + " - " + to_string(points[i]) + "\n";
    }
    return out;
}

int Scorebord::getPoint(int player)
{
    return points[player];
}

void Scorebord::addPoint(int player, int point)
{
    points[player] += point;
}

void Scorebord::setPlayer(string name)
{
    this->name[3] = name;
}

void Scorebord::sortScorebord()
{
    int big = 0;
    int tempPoint;
    string tempName;
    for (int i=0;i<4;i++)
    {
        big = -1;
        for (int e=i;e<4;e++)
        {
            if (big == -1)
            {
                big = e;
            }
            else if (points[e] >= points[big])
            {
                big = e;
            }
        }
        if (big != i)
        {
            tempPoint = points[i];
            tempName = name[i];
            points[i] = points[big];
            name[i] = name[big];
            points[big] = tempPoint;
            name[big] = tempName;
        }
    }
}
