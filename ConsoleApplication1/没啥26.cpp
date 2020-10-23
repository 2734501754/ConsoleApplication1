#include<iostream>
#include<string>
using namespace std;
int macvin()
{
	cout << "Enter a word:";
	string word;
	cin >> word;
	cout << word;
	char temp;
	int i;
	int j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;

	}
	cout << word << "\nDone\n";
	return 0;
}