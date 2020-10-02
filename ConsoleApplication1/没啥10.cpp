#include <iostream>
using namespace std;
int mlkain()
{
	char food[20] = "hamburger";
	strcpy(food, "flan");
	strncpy(food, "a picnic basket filled with many goodies ", 19);
	food[19] = '\0';
	cout << food << endl;




}