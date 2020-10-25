#include<iostream>
#include<string>
using namespace std;
int maiqxsn()
{

	string word;
	cin >> word;
	char temp;
	for (int j = 0, i = 4; j < i;)
	{
		temp = word[i];
		i--;
		j++;
		word[i] = word[j];
		word[j] = temp;

	}
	cout << word << endl;

	return 0;
}
