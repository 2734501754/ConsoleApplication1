#include <iostream>
#include<vector>
#include <array>
using namespace std;
int maiikjn()
{
	vector<int> a = { 4/2,2,3 };
	int c;
	cin >> c;
	vector<float> b(c);
	cout << a[0] << endl;
	cout << sizeof(b) << endl;//32位16字节,64位32字节
	cout << sizeof(a) << endl;
	array<int, 4>d;
	array<double, 3>a3 = {1.5, 2.5, 3.5};
	array<char, 6>f = { "hello" };
	array<double, 3>a4;
	double l[3] = { 1.1,1.2,1.3 };
	double p;
	int v[2] = {1,2 };
	cout << a[0] << endl;
	a3.at(0) = 9.9;
	cout << a3[0] << endl;
	p = l[2];
	cout << p<< endl;
	a4 =a3;
	vector<int>pp = { 1,2,3 };
	vector<int>ll;
	ll = pp;
	cout << ll[0] << endl;
	cout << a3[2] << "," << a4[2] << "," << &a3 << "," << &a4;
	return 0;

}