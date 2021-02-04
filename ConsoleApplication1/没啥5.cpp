#include <iostream>
using namespace std;
int mainz()
{
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;
	cout << "nights value= ";
	cout << nights << ": location" << &nights << endl;
	cout << "int";
	cout << "value=" << *pt << ":location= " << pt << endl;
	double* pd = new double;
	*pd = 10000001.0;
	cout << "double";
	cout << "value= " << *pd << ":location " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of *pt=" << sizeof(pt);
	cout << "size of *pt=" << sizeof(*pt);
	cout << "size of pd=" << sizeof(pd);
	cout << "size of *pd=" << sizeof(*pd);
	return 0;
}
		const int strsize = 20;
		const int human_num = 5;

		struct bop {
			char fullname[strsize];
			char title[strsize];
			char bopname[strsize];
			int preference;
		};

		int m23ain() {
			bop human[human_num] = 
			{
				{"Wimp Macho", "Teacher","Captain America", 0},
				{"Raki Rhides", "Junior Programmer", "Raytheon", 1},
			    {"Celia Laiter", "Doctor","MIPS",2},
			    {"Hoppy Hipman","Analyst Trainee","Black widow", 1},
			    {"Pat Hand","Student", "LOOPY", 2}
			};
			cout << "Benevolent Order of Programmers Report\n";
			cout << "a. display by name     b.display by title\n";
			cout << "c. display by bopname  d. display by preference\n";
			cout << "q. quit\n";

			char ch;
			cout << "Enter your choice: ";
			while (cin >> ch && ch != 'q')
			{
				switch (ch) {
				case 'a':
				{
					for (int i = 0; i < human_num; i++)
					{
						cout << human[i].fullname << endl;
					}
					break;
				}
				case 'b':
				{
					for (int i = 0; i < human_num; i++)
						cout << human[i].title << endl;
					break;
				}
				case 'c':
				{
					for (int i = 0; i < human_num; i++)
						cout << human[i].bopname << endl;
					break;
				}
				case 'd':
				{
					for (int i = 0; i < human_num; i++) {
						if (human[i].preference == 0)
							cout << human[i].fullname << endl;
						else if (human[i].preference == 1)
							cout << human[i].title << endl;
						else
							cout << human[i].bopname << endl;
					}
					break;
				}
				}
				cout << "Next choice: ";
			}
			cout << "Bye!" << endl;
			
			system("pause");
			return 0;
		}
