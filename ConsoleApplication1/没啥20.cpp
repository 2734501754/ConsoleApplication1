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
	cout << "������ֱ��: ";
	cin >> a->zhijing;
	cout << "�����빫˾��: ";
	cin.getline(a->gongsi, 20);

	delete a;
	return 0;
}
