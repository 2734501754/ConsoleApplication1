#include <iostream>
using namespace std;
int maaaain()
{
	
	char* b = new char[20];
	cout << "������һ���ַ���:";
	cin >>b;
    b[strlen(b) - 1]='\0'; 
	cout << b;
	delete[]b;
	return 0;
}