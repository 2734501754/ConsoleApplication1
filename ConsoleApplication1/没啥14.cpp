#include <iostream>
using namespace std;
int b;//静态变量(静态存储)
int ma554in()
{

	int a = 2;//自动变量(自动存储)
	string prices = { "dsssa" };
	//for (int x: prices)
	//	cout << x<< endl;
	char ch, d;
	int count = 0;
	//cout << "Enter characters; enter * to quiet:\n";
	cin >> ch;
	while (cin.fail() == false)//ch != '*'
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	cin.clear();
	cout << endl << count << " characters read\n";
	int e;

	cin >> e;
	cout << 89;
	return 0;
}
	int ma75in()
{
	for (; cin>>b,b== false;)
		cout << 5<<endl;
	cout << "happy Christmas";
	return 0;
}