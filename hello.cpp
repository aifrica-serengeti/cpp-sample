#include <iostream>
#include "hello.h"

using namespace std;
namespace MyNamespace1 {
    void printHello()
    {
        cout<<"Hello"<<endl;
    }

    int printWorld()
    {
        cout<<"World"<<endl;

        return 100;
    }

    void printNumber(int number)
    {
        cout<<number<<endl;
    }

    void printNumber(float number)
    {
        cout<<number<<endl;
    }
}
