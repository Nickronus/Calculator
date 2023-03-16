#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <map>
#include "ifactoryoperations.h"

class Calculator
{
public:
    float Calculate(IFactoryOperations* factoryOperations);
};

#endif // CALCULATOR_H
