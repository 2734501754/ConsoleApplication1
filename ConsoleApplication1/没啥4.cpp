#include <iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int maaaain()
{
	
	char* b = new char[20];
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®:";
	cin >>b;
    b[strlen(b) - 1]='\0'; 
	cout << b;
	delete[]b;
	return 0;
}
int ma1231in()
{
	const int SIZE = 60;
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name ofdate file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		//exit(EXIT_FAILURE);

	}
	double value;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";
	if (count == 0)
		cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();
	return 0;
}