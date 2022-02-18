#pragma once
class IntRange
{
private:
	int first, second;
public:
	int getfirst() const { return first; };
	int getsecond() const { return second; };
	void setfirst(int value);
	void setsecond(int value);

	bool Init(int x, int y);
	void Display() const ;
	void Read();

	bool rangeCheck(int n);

};

