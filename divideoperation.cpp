#include "divideoperation.h"

float DivideOperation::Operation(float x, float y)
{
    return x / y;
};

IOperation* DivideOperation::Clone()
{
    DivideOperation* divieOperation = new DivideOperation();
    return divieOperation;
};
