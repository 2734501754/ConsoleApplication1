#include<iostream>
#include<array>
using namespace std;
int ma1yue15in()
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
			cout << erwei[row][col] << endl;
		cout << endl;
	}
	int i, j, t;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			t = j * i;
			cout << j << "*" << i << "=" << t << "  ";
		}
		cout << endl;
	}
	const int Cities = 5;
	const int Years = 4;
	char cities[Cities][25] =
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	int maxtemps[Years][Cities] =
	{
		96,100,97,101,105,
		96,98,91,107,104,
		97,101,93,108,107,
		98,103,95,109,108
	};
	cout << "Maximun temperatures for 2008-2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
		{
			cout << maxtemps[year][city] << '\t';
			cout << endl;
		}
	}
	for (int q = 1; q <= 5; q++)
	{
		for (int w = 1; w <= q; w++)
			cout << " ¡ö";
		cout << endl;
	}
	const int ArSize = 100;
	array<long double, ArSize + 1>factorials;
	factorials[1] = factorials[0] = 1.0;
	for (int i = 2; i <= ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i <= ArSize; i++)
		cout << i << "!= " << factorials[i] << endl;
	int sh = 1;
	int b=0;
	while (sh)
	{
		cin >> sh;
		b = b + sh;
		cout << b<<endl;
	}
	return 0;
}