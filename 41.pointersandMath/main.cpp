// The New Boston
// Pointers and Math

#include <iostream>

using namespace std;

// Key points: "*" is how you point to an object we use the "&" in front of an variable to let
// the complier know we want to look at a memory address so like the space that your variable is being held in
// each integer takes up 4 bytes of memory but this can be different depending on computer so don't need
// to focus on exact results for this tutorial since we are working on different systems.  Prob same though...


int main()

{
 int bucky [5]; // basic integer array with 5 integers

 int *bp0 = &bucky[0]; // so basically we are printing out the memory address of each variable
 int *bp1 = &bucky[1]; // since we are making a basic int array these numbers are stored one after another
 int *bp2 = &bucky[2]; // so when you run this code you will not be changing the memory address




 cout << "bp0 is at " << bp0 << endl;  // rather as you will see when we add two below it is overwriting anything it is just pointing to another space in the memory

 cout << "bp1 is at " << bp1<< endl;  // probably see a "4" (bytes of information)

 cout << "bp2 is at " << bp2 << endl;  // "8" (bytes of information) when you run the code


bp0 += 2;  // what will happen is it will point to an element it is pointing to.  So like it changes at like 0,4,8 depending on how your computer stores information
           //  So here also increments by bp0; which would increment to element 1

cout << "bp0 is now at " << bp0 << endl;  // So now you will see bp0 will now be at bp08


// Key point whenever you add integers to a pointer it does not change the memory address!!
// Whenever you work with pointers your only changing what element it is pointing to.


 cin.ignore().get();

 return 0;

}

