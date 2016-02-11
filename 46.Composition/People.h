//people.h
#ifndef PEOPLE_H
#define PEOPLE_H
#include "birthday.h"
#include "people.h"
#include <iostream>
using namespace std;


class people
{
public:
	people(string x, birthday bo);  //error here
	void printinfo();
private:
	string name;
	birthday dateofbirth;  //error here

};

#endif // PEOPLE_H
