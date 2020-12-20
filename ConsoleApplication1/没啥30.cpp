#include<iostream>
#include<string>
using namespace std;
typedef char a[];
#define dog int*
#define hh int
#define y(y) y*y

int m8ain()
{
	int a=10,b=20;
	cout << y(b) - y(a);
	return 0;
	typedef int c;
	//cout << sa;

	//c = 's';
	//int i1 = 10;
	//int i2 = 20;
	//int const* p = &i1;
	//cout <<* p;
}
//int sa()
//{
	//c qwe = 1;
//}


int m76ain()
{
	const int ArSize = 27;
	char name[ArSize];
	cout << "Your first name,please: ";
	cin.getline(name,27);
	cout << "Here is your name, verticalized and ASCIIized:\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " <<int(name[i])<< endl;
		i++;
	}
	return 0;
}
