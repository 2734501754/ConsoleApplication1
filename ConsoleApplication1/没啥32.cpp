#include<iostream>
using namespace std;
int main()
{
	int erwei[3][5] =
	{
		{100,200,300,400,500},
		{600,700,800,900,1000},
		{1100,1200,1300,1400,1500}
	};
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 5; col++)
			cout << erwei[row][col]<<endl;
		cout << endl;
}
}