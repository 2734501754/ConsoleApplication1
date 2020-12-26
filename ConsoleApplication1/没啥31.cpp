#include<iostream>
using namespace std;
int ma331in()
{
	int i = 0;
	for (;;)
	{
		i++;
		if (30 >= i)break;//breakÊÇ½áÊøÑ­»·
	}
	cout << i << endl;
	int j = 0;
	do
	{
		j++;
		cout << j << endl;
	} while (30 > j);
	cout << j << endl << endl;
	while (i < 30)
	{
		i++;
		cout << i << endl;;
	}
	cout << i << endl;
	for (;;)
		cout << "h";
	
}