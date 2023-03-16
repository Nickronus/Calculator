#ifndef MINUSOPERATION_H
#define MINUSOPERATION_H
#include "Ioperation.h"

class MinusOperation : public IOperation
{
public:
    float Operation(float x, float y) override;
    IOperation* Clone() override;
};

#endif // MINUSOPERATION_H
