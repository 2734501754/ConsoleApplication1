#include <iostream>
#include <cstdlib>
using namespace std;
int mcan()
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

	


