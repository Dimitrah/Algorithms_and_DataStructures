//User enters an 5 element array and Quick sort sorts it in ascending order
//#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 5;
void ArrayInput(int a[],int n);
//user enters a 5 element array
void swap(int*a, int* b);
int partition(int a[], int low, int high);
//takes the last element as the pivot and places the smaller elements(to the pivot) left of pivot and all bigger right of pivot
void Quicksort(int a[], int low, int high);
//sorts array's elements in ascending order
void ArrayOutput(int a[], int n);
//cout array
int main()
{
	int a[n];
	ArrayInput(a, n);
	Quicksort(a, 0, n-1);
	ArrayOutput(a, n);
	return 0;
}

void ArrayInput(int a[], int n)
{
	cout << "Give the " << n << " elements of the array." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Give the number " << i+1 << " element of the array." << endl;
		cin >> a[i];
	}

}

void swap(int* a, int* b)
{
	int k = *a;
	*a = *b;
	*b = k;
}

int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i = low - 1;
	for (int j=low; j <= high-1; j++)
	{
		if (a[j]<=pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i + 1], &a[high]);
	return i + 1;
}

void Quicksort(int a[], int low, int high)
{
	if (low < high)
	{
		int p=partition(a, low, high);
		Quicksort(a, low, p - 1);
		Quicksort(a, p + 1, high);
	}

}

void ArrayOutput(int a[], int n)
{
	cout << "The sorted array is [ " ;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
	cout << "]";
}
