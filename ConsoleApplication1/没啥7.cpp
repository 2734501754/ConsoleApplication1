#include <iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
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
void m421ai5n()
{
    // char a1;
    // cin.get(a1);
     //while (a1 != '@')
   //  {
         //char b = tolower(a1);
         //char b = tolower(a1);
       //  if (a1 <= 'Z' && a1 >= 'A')
       //  {
        //     char b = tolower(a1);
        //     cout << b;
       //  }
      //   else if (a1 <= 'z' && a1 >= 'a')
       //  {
        //     char c = toupper(a1);
        //     cout << c;
        // }
        // else if (!isdigit(a1))
           //  cout << a1;
        //cin.get(a1);
   //}
    int c = 0;
    int i = 0;
    double b = 0;
    double a[10];
    while (i< 10 && cin >> a[i])
    {
        b = b + a[i];
        i++;
    }
    b = b / 10;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b)
            c++;
    }
    cout << c;
 
}
    int m1ain4()
    {
        cout << "Please enter one of the following choices:"<<endl
            << "c) carnivore                p) pianist"<<endl
            << "t) tree                            g) game"<<endl;
            char cn;
        cin >> cn;
        int y = 0;
        while (1>y)
        {
            switch (cn)
            {
            case'c':cout << "Carnivores(食肉动物) are very fierce(凶悍)";
                y++; break;
            case'p':cout << "Beethoven(贝多芬) is an excellent pianist(钢琴家)";
                y++; break;
            case't':cout<<"a maple is a tree";
                y++; break;
            case'g':cout << "Minecraft is a very popular game";
                y++; break;
            default:
                        if (cn != 'c' || cn != 'p',cn != 't' || cn != 'g')
                            cin >> cn;
               
            }
        }
        return 0;
    }
    
