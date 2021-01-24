#include <iostream>
#include <cstdlib>
#include<cctype>
using namespace std;
int m99ain()
{

    string str, temp;
    cout << "first string:" << endl;
    cin >> temp;
    str += temp;//str=str+temp
    cout << "second string:" << endl;
    cin >> temp;
    str += temp;//str=str+temp
    cout << "third string:" << endl;
    cin >> temp;
    str += temp;//str=str+temp
    cout << "final string is:\n"
        << str << endl;
    cout << "Done!" << endl;
    return 0;
    system("pause");
}
int ma643in()
{
    //  int x = 0;
   //   int c = x != 0 && 1.0 / x > 100.0;
    //  cout << c << endl;
    //  cout << (5 > 9 or 4 < 6) << endl;
     // char ch;
    //  cin >> ch;
     // if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z'))
      //    cout << "YES";
     // else
     //     cout << "NO"<<endl;
   //   cout << ('c' > 'b')<<endl;
     // if (isalpha(ch))
       //   cout << "yes";
     // else
          //cout << "no";
    cout << "Enter text for analysis,and type "
        " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    cin.get(ch);
    while (ch != 'a')
    {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, "
        << whitespace << " whitespace, "
        << digits << " digits, "
        << punct << " punctuations, "
        << others << " others.\n";
    const char x[2][20] = { "Jason","at your service\n" };
    const char* y = "Quillstone";
    for (int i = 0; i < 3; i++)
        cout << ((i < 2) ? !i ? x[i] : y : x[1])<<endl;
    char xz;
    cin >> xz;
    switch (xz)
    {
    case 99:cout << "\ahello";
        cout << "hi";
        break;
    case 97:cout << "world";
        break;
       
    case 'b':cout << "good";
    
        break;
    //default:cout << "yes";
        int a = 9;
      cout << a;
      cout << "he";
    }
    cout << "e"<<endl;
    const int cs = 2;
    int sr;
    cin >> sr;
    switch (sr)
    {
    case cs:cout << "gs";
    case 6:cout << "fs";
    }
    return 0;
}