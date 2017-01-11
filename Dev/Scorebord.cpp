#include "include/Scorebord.h"

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

    for (int i=0;i<3;i++)
    {
        if (points[i] <= points[3] && bigest == false)
        {
            bigest = true;
            tempName[0] = name[i];
            tempPoint[0] = points[i];
            points[i] = points[3];
            name[i] = name[3];
            for (int e=i;e<3;e++)
            {
                tempName[1] = name[e];
                tempPoint[1] = points[e];
                points[e] = tempPoint[0];
                name[e] = tempName[0];
                tempPoint[0] = tempPoint[1];
                tempName[0] = tempName[1];
            }
        }
    }
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

    for (int i=0;i<3;i++)
    {
        cout << name[i] << endl;
        cout << points[i] << endl;
    }
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
