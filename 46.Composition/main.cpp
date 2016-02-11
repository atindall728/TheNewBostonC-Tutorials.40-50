

#include "birthday.h"
#include "people.h"
#include <iostream>
using namespace std;

int main()

{
	birthday bob(6, 7, 1990);
	people me("Bob", bob);
	me.printinfo();

	cout << "Finished";
}
