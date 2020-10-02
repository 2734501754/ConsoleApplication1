#include <iostream>
using namespace std;
struct inflatable
{
	char name[10];
	float volume;
	double price;
};
int maieeeen()
{
	inflatable* ps = new inflatable;

	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << ps->name << endl;//(*ps).name
	cout << "Volume: " << (*ps).volume << " cubic feet\n";//ps->volume
	cout << "Price: $" << (*ps).price << endl;//ps->prize
	delete ps;
	return 0;
}
using namespace std;
int maindddd()
{
	char ch;
	cin.get(ch);//或者ch=cin.get(); 
	cout << ch << endl;
	return 0;
}
