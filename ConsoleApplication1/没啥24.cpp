#include<iostream>
using namespace std;
int mainjj()
{
	cout << "Enter a word: ";
	char word[5];//string
	cin >> word;
	cout << sizeof(word)<<endl;
	cout << strlen(word) << endl;
	for (int i = strlen(word) - 1; i >= 0; i--)//word.size()-1
		cout << word[i];
	cout << "\nBye.\n";
	return 0;
}