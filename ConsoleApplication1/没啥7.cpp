#include <iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int m6545ain()
{
    ofstream qwer,fin;
    qwer.open("speak.txt");
    qwer << "!!!!";
    char fsx[25];
    cin >> fsx;
    fin.open(fsx);
    fin << "|||||";

    return 0;
}
int ma8544in()
{
    //double sd = 12.869;
    //cout << sd;
   //ofstream morning;
   // morning.open("duang.txt");
    //morning.fixed;
   //morning.precision(2);
   // morning << "sd is:" << sd;
    //morning.close();
    ifstream inFile;
    ifstream fin;
    inFile.open("bowling.txt");
    if (!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }
    char filename[50];
    cin >> filename;
    fin.open(filename);
    double wt;
    inFile >> wt;
    char line[8];
    fin.getline(line, 8);
    return 0;
}

