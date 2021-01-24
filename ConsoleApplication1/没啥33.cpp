#include<iostream>
#include<climits>
using namespace std;
int ma664in()
{
	double s;
	cin >> s;
	cout << int(s)<<","<<INT_MAX;
	char ch;
	cout << "Type,and I shall repeat.\n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\a')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}
	cout << "\nPlease excuse the slight confusion.\n";
	return 0;
}
int mai564n()
{
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue? <y/n>";
	char ch;
	cin >> ch;
	for (ch;ch != '*';)
	{
		if (ch == 'y' || ch == 'e')
			cout << "You were warned!\a\a\n";
		else if (ch == 'n' || ch == 'N')
			cout << "A wise choice. . .bye\n";
		else
			cout << "That wasn't a y or n! Apparently you"
			" can't follow\ninstructions, so "
			"I'll trash your disk anyway.\a\a\a\n";
		cin >> ch;
	}
	return 0;
}
int mai441n()
{
	const int ArSize = 6;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbor. Prigram terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter anegative value.\n";
	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "No data--bye\n";
	else
	{
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}
	const char* qualify[4] =
	{
		"10,000-meter race.\n",
		"mud tug-of-war.\n",
		"masters canoe jousting.\n",
		"pie-throwing festival.\n"
	};
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "You qualify for the " << qualify[index];
	return 0;
}
bool i_int(double);
int mai777n()
{
	int num;
	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!i_int(num))
	{
		cout << "Out of range--please try again: ";
		cin >> num;
	}
	int val = int(num);
	cout << "You've entered the integer " << num<< "\nBye\n";
	return 0;
}
bool i_int(double y)
{
	if (y<=INT_MAX&&y>=INT_MIN)
		return true;
	else
		return false;
}