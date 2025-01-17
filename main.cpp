#include<iostream>
#include "hello.h"
#include "hello2.h"
#include "cls1.h"
#include "cls2.h"

void printName();

int main()
{
    MyNamespace1::printHello();
    int no = MyNamespace1::printWorld();
    MyNamespace1::printNumber(no);
    printHello2();
    printWorld2();
    MyNamespace1::printNumber(10.1f);
    printName();

    ABCD abcd;
    abcd.Hi();
    MyNamespace2::InnerNamespace1::ABCD abcd2;
    abcd2.Hi();
    return 0;
}

void printName()
{
    std::cout<<"Name"<<std::endl;
}
