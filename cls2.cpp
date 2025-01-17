#include "cls2.h"
#include <iostream>

namespace MyNamespace2::InnerNamespace1 {
    ABCD::ABCD(/* args */)
    {
    }

    ABCD::~ABCD()
    {
    }

    void ABCD::Hi()
    {
        std::cout << "Hi" << std::endl;
    }
}
