#include <iostream>
using namespace std;
int mainl()
{
	double wages[3] = { 10000.1,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };
	double* pw = wages;
	short* ps = &stacks[0];
	cout << "pw=" << pw << ", *pw=" << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to rhe pw pointer:\n";
	cout << "pw=" << pw << ", *ps=" << *pw << "\n\n";
	cout << "ps=" << ps << ", *ps=" << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps=" << ps << ", *ps=" << *ps << "\n\n";
	return 0;
	
}