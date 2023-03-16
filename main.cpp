#include "calculator.h"
#include "factoryoperations.h"
#include <iostream>
#include <map>
#include "plusoperation.h"
#include "minusoperation.h"
#include "multiplyoperation.h"
#include "divideoperation.h"

int main()
{
    Calculator* calculator = new Calculator();
    PlusOperation* plus = new PlusOperation();
    MinusOperation* minus = new MinusOperation();
    MultiplyOperation* multiply = new MultiplyOperation();
    DivideOperation* divide = new DivideOperation();
    std::map<operations, IOperation*> operationsMap;
    operationsMap.emplace(operations::plus, plus);
    operationsMap.emplace(operations::minus, minus);
    operationsMap.emplace(operations::multiply, multiply);
    operationsMap.emplace(operations::divide, divide);
    FactoryOperations* factoryOperations = new FactoryOperations(operationsMap);
    float report = calculator->Calculate(factoryOperations);
    std::cout<<report;
    delete calculator;
    delete factoryOperations;
    delete plus;
    delete minus;
    delete multiply;
    delete divide;
    return 0;
}
