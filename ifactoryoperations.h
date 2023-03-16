#ifndef IFACTORYOPERATIONS_H
#define IFACTORYOPERATIONS_H

enum operations
{
    plus,
    minus,
    multiply,
    divide
};

class IFactoryOperations
{
public:
    IFactoryOperations(){}
    virtual float Factory(operations operation, float x, float y)=0;
    virtual ~IFactoryOperations(){}
};

#endif // IFACTORYOPERATIONS_H
