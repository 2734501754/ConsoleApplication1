#include <iostream>
using namespace std;
int m312ain()
{//�ֲ�����ֻ���ڴ������ʹ��,��ȫ�ֱ�����������������ʹ��
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
//cout<<c; ����
//cout<<a����b  ��ȷ
//}

