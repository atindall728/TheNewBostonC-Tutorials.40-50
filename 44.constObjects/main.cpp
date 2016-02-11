//  The New Boston
//  44. constObject


#include <iostream>
#include "Sally.h"

using namespace std;

int main()
{

    Sally salObj;           //  Constant objects need constant functions to work. There's much to go over on this topic but read and
    salObj.printShiz();       // run these to get a good understanding

    const Sally constObj;   // Whenever we build a constant object we need to tell the compiler to build constant functions.
    constObj.printShiz2();

cin.ignore().get();

return 0;


}

// In many programs you may want an object that no matter what the object will not change in the code.  Maybe when users start inputing things into your
// program this will be more understandable. :)

//  Questions?  Browse forum @ thenewboston.com or Adam Tindall - The New Boston


// Start of video example:
//const int x = 3;  // creating a "cons.t" object means you don't want the variable to be modified later on in the project

//    x = 5;            //  So if you were to just run the object here you would receive an error message since we did not address in classes
