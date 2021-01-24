#include <iostream>
#include<fstream>
using namespace std;
int m312ain()
{//局部变量只能在代码块内使用,而全局变量可在整个程序中使用
	static int a = 9;
	static int b = 10;
	int c = 11;
	cout << c << endl;
	cout << a << "," << b << endl;
	{
		cout << a << endl;
		cout << c;
		return 0;
	}
}
//{
//cout<<c; 错误
//cout<<a或者b  正确
//}
int m542ain()
{
	char automobile[50];
		char year;//int
	//double a_price;
	//double d_price;
	//ofstream outFile;
	//outFile.open("information.txt");
	cout << "Etnter the make and model of automobile: ";
	ifstream kjs;
	kjs.open("china.txt");
	kjs >> year;
	cout << year;
	//cin.getline(automobile, 50);
	//cout << "Enter the model year: ";
	//cin >> year;
	//cout << "Enter the original asking price: ";
	//cin >> a_price;
	//d_price = 0.913 * a_price;
	//cout << fixed;
	//cout.precision(2);
//	cout.setf(ios_base::showpoint);
	//cout << "Make and model: " << automobile << endl;
	//cout << "Year: " << year << endl;
	//cout << "Was asking $" << a_price << endl;
	//cout << "Now asking $" << d_price << endl;
	//outFile<<fixed;
	//outFile.precision(2);
	//outFile.setf(ios_base::showpoint);
	//outFile << "Make and model: " << automobile << endl;
	//outFile << "Year: " << year << endl;
	//outFile << "Was asking $" << a_price << endl;
	//outFile << "Now asking $" << d_price << endl;
	//outFile.close();
	return 0;
}

