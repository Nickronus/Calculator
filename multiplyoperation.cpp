#include "multiplyoperation.h"

float MultiplyOperation::Operation(float x, float y)
{
    return x * y;
};

IOperation* MultiplyOperation::Clone()
{
    MultiplyOperation* multiplyOperation = new MultiplyOperation();
    return multiplyOperation;
};
