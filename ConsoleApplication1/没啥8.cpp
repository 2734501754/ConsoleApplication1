#include <iostream>
using namespace std;
int mainl()
{
	double wages[3] = { 10000.1,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };
	double* pw = wages;
	short* ps = &stacks[0];
	cout << "pw=" << pw << ", *pw=" << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to rhe pw pointer:\n";
	cout << "pw=" << pw << ", *ps=" << *pw << "\n\n";
	cout << "ps=" << ps << ", *ps=" << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps=" << ps << ", *ps=" << *ps << "\n\n";
	return 0;
	
}
#include<string>
int m8978ain()
{
	int a;
	int b = 0;
	struct information
	{
		string name;
		double	fund;
	};        
	cout << "�������������Ŀ";
	cin >> a;
	cin.get();
	information*p = new information[a];      	               
	for(int c=0;c<a;c++)
	{
		cout << "����������:";
			getline(cin,p[c].name);
			
			cout << "�����߿���:";
			cin >> p[c].fund;
			cin.get();
	
	}
	cout << "����Ϊ��Ҫ�����:" << endl;
	cout << "��10000�ߵ�����:"<<endl;
	for (b; b < a; b++)
	{
		if (p[b].fund > 10000)
		{
			
			cout<< p[b].name << ":��������:" << p[b].fund<<endl;
			
		}
	}
	for (int x = 0; x < a; x++)
	{
		if (p[x].fund <= 10000)
		{
			cout << "�����ľ����:" << p[x].name << p[x].fund << endl;
		
		}
	}
	delete[]p;
	return 0;
}