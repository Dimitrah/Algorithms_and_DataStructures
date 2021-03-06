
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;


class pizza
{
public:
	void inputDescription();//type(thick,homemade,thin),size(small,medium,big),extra ingredients
	void outputDescription();
	double computePrice();//small:10, medium:14, big: 17, extra ingredient 2

private:
	int type;
	int size;
	int extra;
	double price;
};

class Order
{
public:
	
private:
	vector<pizza> pzz;
};

int main()
{
	pizza yours;
	yours.inputDescription();
	yours.outputDescription();

	cout << "The price is " << yours.computePrice() <<"$." endl;
    return 0;
}

void pizza::inputDescription()
{
	cout << "What crust do you want? 1:thick, 2:homemade, 3:thin, or whatever"<<endl;
	cin >> type;
	cout << "What size? 1:small, 2:medium, 3:big, or whatever"<<endl;
	cin >> size;
	cout << "How many extra ingredients?"<<endl;
	cin >> extra;
}

void pizza::outputDescription()
{
	cout << "Your pizza is a ";
	switch (type)
	{
	case 1:
		cout << "thick, ";
		break;
	case 2:
		cout << "homemade, ";
		break;
	case 3:
		cout << "thin, ";
		break;
	default:
		cout << "thin, ";
		break;
	}

	switch (size)
	{
	case 1:
		cout << "small ";
		break;
	case 2:
		cout << "medium ";
		break;
	case 3:
		cout << "big ";
		break;
	default:
		cout << "small ";
		break;
	}

	cout << "with " << extra << " extra ingredients pizza!" << endl;
	
}

double pizza::computePrice()
{
	switch (size)
	{
	case 1:
		price = 10;
		break;
	case 2:
		price = 14;
		break;
	case 3:
		price = 17;
		break;
	default:
		price = 10;
		break;
	}

	price = price + 2*extra;

	return price;
}