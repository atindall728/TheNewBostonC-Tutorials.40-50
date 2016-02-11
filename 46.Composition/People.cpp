

#include "people.h"
#include "birthday.h"
#include <iostream>
using namespace std;

people::people(string x, birthday bo)
	: name(x), dateofbirth(bo)
{

}

void people::printinfo() {
	cout << name << " was born on: ";
	dateofbirth.printdate();
}



