#ifndef PLUSOPERATION_H
#define PLUSOPERATION_H
#include "Ioperation.h"

class PlusOperation : public IOperation
{
public:
    float Operation(float x, float y) override;
    IOperation* Clone() override;
};

#endif // PLUSOPERATION_H
