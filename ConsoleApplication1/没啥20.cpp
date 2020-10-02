#include<iostream>
using namespace std;
struct william_wingate
{
	char gongsi[20];
	int zhijing;
	double zhong;

};
int mdxafdain()
{
	
	william_wingate*a = new william_wingate;
	cout << "请输入直径: ";
	cin >> a->zhijing;
	cout << "请输入公司名: ";
	cin.getline(a->gongsi, 20);

	delete a;
	return 0;
}
