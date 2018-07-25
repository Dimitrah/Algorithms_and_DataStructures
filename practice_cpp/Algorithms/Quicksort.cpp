#include "stdafx.h"
#include <iostream>
using namespace std;

const int n = 5;
void ArrayInput(int a[],int n);
void swap(int*a, int* b);
int partition(int a[], int low, int high);
void Quicksort(int a[], int low, int high);

int main()
{
	int a[n];
	ArrayInput(a, n);
	Quicksort(a, 0, 4);
	for (int i = 1; i < n; i++)
	{
		cout << a[i]<<endl;
	}
    return 0;
}

void ArrayInput(int a[], int n)
{
	cout << "Give the " << n << " elements of the array." << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << "Give the number " << i << " element of the array." << endl;
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
	int pivot = high;
	int i = low - 1;
	for (int j=low; j <= high; j++)
	{
		if (a[j]<=pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i + 1], &pivot);
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
