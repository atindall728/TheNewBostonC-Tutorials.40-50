#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include "people.h"
#include "birthday.h"
#include <iostream>
using namespace std;



using namespace std;

class birthday
{
public:
	birthday(int m, int d, int y);
	void printdate();
private:
	int month;
	int day;
	int year;
};


#endif // BIRTHDAY_H
