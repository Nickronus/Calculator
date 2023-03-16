#ifndef MULTIPLYOPERATION_H
#define MULTIPLYOPERATION_H
#include "Ioperation.h"

class MultiplyOperation : public IOperation
{
public:
    float Operation(float x, float y) override;
    IOperation* Clone() override;
};

#endif // MULTIPLYOPERATION_H
