#ifndef IOPERATION_H
#define IOPERATION_H


class IOperation
{
public:
    virtual float Operation(float x, float y)=0;
    virtual ~IOperation(){}
    virtual IOperation* Clone()=0;
};

#endif // IOPERATION_H
