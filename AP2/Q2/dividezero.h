#ifndef DIVIDEBYEXCEPRION_H
#define DIVIDEBYEXCEPRION_H
#include <iostream>
#include <stdexcept> 


using namespace std;

class DivideByZeroException: public runtime_error{
    public:
        DivideByZeroException(): runtime_error("tentou dividir por zero"){}
};

#endif