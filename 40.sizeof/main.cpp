// The New Boston
// Size Of

#include<iostream>

using namespace std;

// Key point: This tutorial basically goes over some information of how the computers memory is impacted by your program
// It explains broader concepts so we have a good understanding everything so that we can apply it later on to pointers. Ok. Lets go.

int main()
top

{
                     // An int takes up less memory than a double since an int does not have a decimal.  A double is more precise since counts the decimal
                     // But lets say we make an array.
    double bucky[10]; // Don't forget array brackets so you get 80 bytes. Not 8.So a double will take up more memory since it is more precise.  So here since bucky(10) we would know it took up 80 bytes 8*10=80
                    // a char is another type like double letting computer know what to do.  It is the character variable so like the size of int c would print out at 4 bytes
    cout << sizeof(bucky) << endl;
    cout << sizeof(bucky) / sizeof(bucky[0]) << endl; // So you can use these to see how many elements may be in an array regardless if you can directly see them.

    // Are you a hacker?  I dunn0 ;)

    // An Array is basically 10 int or doubles strung together

cin.ignore().get();

return 0;

        //  So this is just a little math at end of tutorial but if you want to try int and char just change the double line

}

        // A byte is a piece of computer memory

        // Take aways:    A char takes up 1 bytes of memory space where an integer (int) takes up 4 bytes on tutorial but every computer stores information diferently
        // So you may not get exact number.   But the main point is the main precise an integer is, the more memory it takes up.

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall @ The New Boston
