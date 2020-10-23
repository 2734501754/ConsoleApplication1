#include<iostream>
using namespace std;
int macfin()
{

	double arr[5] = { 21.1,32.8,23.4,45.2,66.6 };
	double* pt = arr;
	++pt;//1+arr[0]=arr[1]=32.8
	cout << *pt<<","<<arr[2]<<endl;//32.8ºÍ23.4
	double x = *++pt;//1+arr[1]=arr[2]=23.4
	cout << *pt <<","<<x<< "," << arr[2] << endl;
	++* pt;//23.4+1=24.4
	cout << *pt << "," << arr[2] << endl;
	(*pt)++;//25.4
	cout << *pt << "," << arr[2] << endl;
	x=*pt++;
	cout << *pt << "," << arr[2] << endl;
	int k = 5;
	k += 3;
	int* pa = new int[10];
	pa[4] = 12;
	pa[4] += 6;
	cout << pa[4]<<endl;
	*(pa + 4) += 7;
	cout << pa[4]<<endl;
	pa[0] = 1;
	pa[1] = 2;
	pa[2] = 3;
	pa[3] = 4;
	pa[0]+= 2;
	cout << *pa;
	






	
	return 0;
}