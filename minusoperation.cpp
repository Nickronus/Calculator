#include "minusoperation.h"

float MinusOperation::Operation(float x, float y)
{
    return x - y;
};

IOperation* MinusOperation::Clone()
{
    MinusOperation* minusOperation = new MinusOperation();
    return minusOperation;
};
