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
int mai32n34()
{
	int i = 0;
	for (; i < 9;)
	{
		cout << "i is:" << i << endl;
		//continue;
		i++;
		cout << "not" << endl;
	}
	int digit;
	cin >> digit;
	switch (digit)
	{
	case 1:cout << "Tody is Monday";
		break;
	case 2:cout << "Tody is Tuesday";
		break;
	case 3:cout << "Tody is ???";
		break;
	case'd':cout << "100";
		break;
		//default:cout << "²»´æÔÚ";
			//break;
		cout << "hello";
	}
	cout << "world" << endl;
	cout << (9 > 6 ? 7 < 5 : 34) << endl;
	int time;
	cout << "bin" << endl;
	goto time;
	cout << "PDD  ";
	//int ass = 4;
time:cout << "Â¬±¾Î°  ";

	cout << "nb";
	//cout << ass;
	return 0;
}
int m53232ain()
{
	//	char kk;
		const int Max = 5;
		int golf[Max];
		cout << "please enter your goif scores.\n";
		cout << "your must enter " << Max << " round.\n";
		int i;
		for (i = 0; i < Max; i++)
		{
			cout << "round #" << i + 1 << ": ";
			while (!(cin >> golf[i]))
			{
				cin.clear();
	while (cin.get() != ' ')
					continue;
				cout << "please enter a number: ";
			}
		}
		double total = 0.0;
		for (i = 0; i < Max; i++)
			total += golf[i];
		cout << total / Max << " = average score "
			<< Max << " rounds\n";
	//	}int t;
		//cin >> t;
	//	if (!cin)
		//{
		//	cin.clear();
		//	cin.get();
		//}
		//cin.get();
		//cin.get();
		//cout << t;
	//int as, ch;
	//cin >> as;
	//while (!cin)
//	{
	//	cin.clear();
	//	cin.get();
	//	cout << "h";
  //   }
//	cin.get();
	//cin.get();
	//	cout << "lbw";
		return 0;
	}


		