//Asks the user for a 5 element array and returns the array with the elements in ascending order.

//#include "stdafx.h"
#include <iostream>
using namespace std;

const int n=5;
void Fillarray(int a[],int n);
//The user enters the array's elements
void CoutArray(int a[], int n);
//returns the sorted array

int main()
{

	int a[n],b,tmp;
	Fillarray(a, n);
	do {
		b = 0;
		for (int i = 0; i<n - 1; i++)
			if (a[i]>a[i + 1])
			{
				tmp = a[i]; a[i] = a[i + 1]; a[i + 1] = tmp;
				b++;
			}
	} while (b != 0);

	CoutArray(a, n);

    return 0;
}



void Fillarray(int a[], int n)
{
	n = 5;
	cout << "Give "<<n<<" elements."<<endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Give the " << i + 1 << " element of the array." << endl;
		cin >> a[i];
     }


}

void CoutArray(int a[], int n)
{
	cout << "[";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "]" << endl;
}
