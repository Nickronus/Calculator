#ifndef DIVIDEOPERATION_H
#define DIVIDEOPERATION_H
#include "Ioperation.h"

class DivideOperation : public IOperation
{
public:
    float Operation(float x, float y) override;
    IOperation* Clone() override;
};

#endif // DIVIDEOPERATION_H
