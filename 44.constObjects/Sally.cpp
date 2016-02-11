#include <iostream>
#include "Sally.h"
using namespace std;


Sally::Sally(){
}




void Sally::printShiz()
{
    cout << "I am a regular function" << endl; //  Need to make sure you create a const object here. The .cpp source file.
}
                    //  Constant objects need constant functions



void Sally::printShiz2() const
{
    cout << "I am a the constant function" << endl;  // so now we have told the source .cpp file what to do.
}

