#include "factoryoperations.h"
#include <map>


FactoryOperations::FactoryOperations() : IFactoryOperations()
{

}

FactoryOperations::FactoryOperations(std::map<operations, IOperation*> operationsMap) : IFactoryOperations()
{
    this->operationsMap = operationsMap;
}

FactoryOperations::~FactoryOperations()
{

}

float FactoryOperations::Factory(operations operation, float x, float y)
{
    switch (operation)
    {
    case operations::plus:
    {
        IOperation* clonedOperation = this->operationsMap.find(plus)->second->Clone();
        return clonedOperation->Operation(x, y);
        delete clonedOperation;
        break;
    }
    case operations::minus:
    {
        IOperation* clonedOperation = this->operationsMap.find(minus)->second->Clone();
        return clonedOperation->Operation(x, y);
        delete clonedOperation;
        break;
    }
    case operations::multiply:
    {
        IOperation* clonedOperation = this->operationsMap.find(multiply)->second->Clone();
        return clonedOperation->Operation(x, y);
        delete clonedOperation;
        break;
    }
    case operations::divide:
    {
        IOperation* clonedOperation = this->operationsMap.find(divide)->second->Clone();
        return clonedOperation->Operation(x, y);
        delete clonedOperation;
        break;
    }
    }
};
