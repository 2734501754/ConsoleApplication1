#include<iostream>
using namespace std;
int mazxcin()
{
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		word[0] = ch;
		cout << word << endl;
	}
	cout << "After loop ends,word is " << word << endl;
	return 0;
}
int mai9n()
{
	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favourite number\n";
	do
	{
		cin >> n;
		
		
	} while (n != 7);
	
	cout << "Yes,7 is my favourite.\n";
	return 0;
}