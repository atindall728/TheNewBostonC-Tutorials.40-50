#include <iostream>  // Make sure that you copy and past all of the libraries and files same at top of main.cpp and sally
#include "Sally.h"
using namespace std;

Sally::Sally()  // So this is the Sally class where the constuctor will go.
{
   cout << " I am the constuctor"  << endl; // we just label here so when it prints to screen we know what it is
}

Sally::~Sally()  // The ~ signifies the deconstuctor that runs at end of program to clear the temp memory
{
    cout << "I am the deconstuctor"   << endl;

    //  I would suggest reading up on these to understand conceptually what is going on.
}


//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston
