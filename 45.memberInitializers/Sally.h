#ifndef SALLY_H
#define SALLY_H
#include <iostream>

using namespace std;

class Sally
{
    public:
        Sally(int a, int b);
        void print();
    private:
        int regVar;
        const int constVar;
};

#endif // SALLY_H
