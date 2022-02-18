#include "IntRange.h"
#include <iostream>

using namespace std;

void IntRange::setfirst(int value)
{
	first = value;
}

void IntRange::setsecond(int value)
{
	second = value;
}

bool IntRange::Init(int x, int y)
{
	if (x < y)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void IntRange::Display() const
{
	cout << "first = " << first << "     second = " << second << endl;
}

void IntRange::Read()
{
	int x, y;
	cout << "first =  ";
	cin >> x;
	do
	{
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}

bool IntRange::rangeCheck(int n)
{
	if (n >= first && n < second)
	{
		cout << "Yessss" << endl;
		return true;
	}
	else{
		cout << "Noooo" << endl;
		return false;
	}
};