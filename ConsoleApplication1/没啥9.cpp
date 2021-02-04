#include <iostream>
#include <cstring>
#include<fstream>
using namespace std;
int mainqwe()
{
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps ;
	cout << animal << " and ";
	cout << bird << "\n";
	cout << "Enter a kind of animal:";
	cin >>animal ;
	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << sizeof("fox") << endl;
	cout << "After using strcpy():\n";
	cout << animal << "at" << (int*)animal << endl;
	cout << ps << "at" << (int*)ps << endl;
	return 0;

}
int m241ai3n()
{
	int b = 0;
	int c=0;
	int d = 0;
	char a[15];

	while (cin>>a)
	{
		if (isalpha(a[0]))
		{
			if (a[0] == 'q'&&strlen(a)==1)
				break;
			else if (a[0] == 'a' || a[0] == 'e' || a[0] == 'i' || a[0] == 'o' || a[0] == 'u')
				b++;
			else
				c++;
		}
		else
			d++;
		
	}
	
	cout << b << "," << c<<","<<d;
	return 0;
}
int m41ai3n()
{
	int b = 0;
	char a[30];
	ifstream AK47;
	cout << "以下是从information文件中读取的数据:" << endl;
	AK47.open("information.txt");//关联
	while (!AK47.fail())
	{
		b++;
		AK47>>a;
		cout << a;
	
	}
	AK47.close();
	cout << b;
	system("pause");
	return 0;
}