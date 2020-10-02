#include <iostream>
using namespace std;
struct abcd
{
	int year;
};
int aaxmain()
{
	abcd s01, s02, s03;
	s01.year = 1999;
	cout << s01.year;

	abcd* pa = &s02;
	cout <<pa<<endl;

	pa->year=2020;
	cout << pa->year << endl;

	abcd v[4];
	v[0].year=2019;
	cout << v<<endl;
	cout <<v[0].year<<endl;
	(v+1)->year = 2018;
	cout <<(v+1)->year<<endl;//因为v[1]不是一个地址所以不行所以必须是v或通过(v+1)
	const abcd *psa[3] = { &s01,&s02,&s03 };
	cout <<(*psa)->year<<endl;
	const abcd**ppa =psa;
	cout << ppa<<endl;//ppa是得到首元素的地址然后因为第一个元素本来就是&s01,所以是&s01的地址不是s01的值!
	cout << *ppa<< endl;
	cout << &s01 << endl;
	auto ppb = psa;
	cout << (*ppa)->year<<endl;
	cout << (*(ppb + 1))->year << endl;
	return 0;	

					

}