#include <iostream>
using namespace std;
struct inflatable
{
	char name[20];
	double prize;
};
int maein()
{
	inflatable guests[2]=
	{
		{"qqqq",231.1},
	    {"hhhh", 10.2}
	};
	cout << guests[1].name;
	return 0;
}