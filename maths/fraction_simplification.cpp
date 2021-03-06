//The user enters a fraction and it outputs the result of the division and the simplification of the fraction 

#include "stdafx.h"
#include <iostream>
using namespace std;

class Fraction
{
public:
	void input();
	//the user enter numerator and denominator
	void output();
	//outputs the result of the fraction
	void simplification();
	//simplifies fraction
	double MKD();
	//finds the greatest common divisor of numerator and denominator

private:
	double numerator;
	double denominator;
};

int main()
{
		Fraction fr;
		cout << "Give a fraction: " << endl;
		fr.input();
		cout << "The result of the fraction is: ";
		fr.output();
		cout << endl;
		fr.simplification();
		

    return 0;
}

void Fraction::input()
{
	cout << "Give the numerator of the fraction." << endl;
	cin>>numerator;
	cout << "Give the denominator(not 0) of the fraction." << endl;
	cin >> denominator;
	while (denominator == 0)
	{
		cout << "Give the denominator(not 0) of the fraction." << endl;
		cin >> denominator;
	}
}

void Fraction::output()
{
	double y = numerator / denominator;
	cout<< y << endl;
}

void Fraction::simplification()
{
	double num = numerator / Fraction::MKD();
	double den = denominator / Fraction::MKD();
	cout << "The simplification of the fraction is " << num << "/" << den << "." << endl;
}

double Fraction::MKD()
{
	double a = numerator;
	double b = denominator;
	if (a > b)
	{
		int z;
		double k;
		z = a / b;
		k = a - z * b;
		while (k > 0)
		{
			a = b;
			b = k;
			z = a / b;
			k = a - z * b;
		}
		return b;
	}
	else if (a < b)
	{
		int z;
		double k;
		z = b / a;
		k = b - z * a;
		while (k > 0)
		{
			b = a;
			a = k;
			z = b / a;
			k = b - z * a;
		}
		return a;
	}
	else
		return a;
}
