#include "plusoperation.h"

float PlusOperation::Operation(float x, float y)
{
    return x + y;
};

IOperation* PlusOperation::Clone()
{
    PlusOperation* plusOperation = new PlusOperation();
    return plusOperation;
};
