#include<iostream>
const int ArSize = 16;
using namespace std;
int miiain()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "i= " << factorials[i] << endl;
	return 0;















































































	
	

}