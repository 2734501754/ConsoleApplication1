#include <iostream>
using namespace std;
int mzzxcain()
{
	char last_name[20];
	char score[20];
	char first_name[20];
	int age;
	cout << " What is your first name? ";
	cin.getline(first_name,25);
	cout << " What is your last name? ";
	cin.getline(last_name,20);
	cout << " What letter grade do you deserve? ";
	cin >> score;
	cout << " What is your age? ";
	cin >> age;
	cout << " Name: " << last_name << "," << first_name << endl;
	cout << "Grade:" << score << endl;
	cout << "Age:" << age;
	return 0;

}