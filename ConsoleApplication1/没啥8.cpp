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
	cout << "请输入捐献者数目";
	cin >> a;
	cin.get();
	information*p = new information[a];      	               
	for(int c=0;c<a;c++)
	{
		cout << "捐献者姓名:";
			getline(cin,p[c].name);
			
			cout << "捐献者款项:";
			cin >> p[c].fund;
			cin.get();
	
	}
	cout << "以下为重要捐款人:" << endl;
	cout << "捐款超10000者的姓名:"<<endl;
	for (b; b < a; b++)
	{
		if (p[b].fund > 10000)
		{
			
			cout<< p[b].name << ":其捐款数额:" << p[b].fund<<endl;
			
		}
	}
	for (int x = 0; x < a; x++)
	{
		if (p[x].fund <= 10000)
		{
			cout << "其他的捐款者:" << p[x].name << p[x].fund << endl;
		
		}
	}
	delete[]p;
	return 0;
}