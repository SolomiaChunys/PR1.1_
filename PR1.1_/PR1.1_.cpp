#include <iostream>
#include "IntRange.h"

using namespace std;

IntRange makeIntRange(int x, int y)
{
	IntRange in;
	if (!in.Init(x, y))
		cout << "wrong argument to Init!" << endl;

	return in;
}

int main()
{
	IntRange in;
	int n;

	in.Read();
	in.Display();

	cout << " rangeCheck(n) =  "; cin >> n;
	in.rangeCheck(n);
	in.setfirst(2);
	in.setsecond(10);

	in.getfirst();
	in.getsecond();

	return 0;
}