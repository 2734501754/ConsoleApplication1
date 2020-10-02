#include <iostream>
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

