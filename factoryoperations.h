#ifndef FACTORYOPERATIONS_H
#define FACTORYOPERATIONS_H
#include "ifactoryoperations.h"
#include <map>
#include "Ioperation.h"

class FactoryOperations : public IFactoryOperations
{
public:
    FactoryOperations();
    FactoryOperations(std::map<operations, IOperation*> operationsMap);
    ~FactoryOperations();
    float Factory(operations operation, float x, float y) override;
private:
    std::map<operations, IOperation*> operationsMap;
};

#endif // FACTORYOPERATIONS_H
