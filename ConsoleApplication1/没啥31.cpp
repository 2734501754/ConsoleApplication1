#include<iostream>
using namespace std;
int ma331in()
{
	int i = 0;
	for (;;)
	{
		i++;
		if (30 >= i)break;//break是结束循环
	}
	cout << i << endl;
	int j = 0;
	do
	{
		j++;
		cout << j << endl;
	} while (30 > j);
	cout << j << endl << endl;
	while (i < 30)
	{
		i++;
		cout << i << endl;;
	}
	cout << i << endl;
	for (;;)
		cout << "h";
	return 0;
}
int m8848ain()
{
	//int ch;
	//cin >> ch;
	//while (cin.fail()==false)
	//{

		//cout << ch ;
	//	cin >> ch;
	//}
	char ch = -1;
	//char ch;
	//cin >> ch;
	//ch = cin.get();
	//while (ch != EOF)
	//{
		//cout.put(ch);

	//	ch = cin.get();
	//}


	//int ch;
	//int count = 0;
	//ch = cin.get();
	//while (ch != EOF)
//	{
	//	cout.put(ch);
	//	ch = cin.get();

//}
	//while (ch= cin.get() != EOF)
	//{
		//cout << ch<<endl;
	//cout.put(char(ch));
	//++count;
//}
	//cout << endl << count << " characters read\n";

	//char first[20];
	//cin.get(first,20);
	//int k;
	//k = strlen(first);
	//for (; k >= 0; k--)
	//	cout << first[k];
	//第一种：把数字变成字符串然后用数组存储，再逆序输出。
	//第二种：把数字的每一位数除以相应的倍数变成个位数，然后逆序恢复输出。
	//int a;
	//cin >> a;//123
	//int b = 0;
	//while (a)
	//{
	//	b = a % 10;
	//	a = a / 10;
		//cout << b;
//	}
	int erwei[3][5] =
	{
		{100,200,300,400,500},
		{600,700,800,900,1000},
		{1100,1200,1300,1400,1500}
	};
	cout << erwei[1][4];

	return 0;
}