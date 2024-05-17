#ifndef SUM_h
#define SUM_h

#include "Operation.h"

class Sum : public Operation {
    public:
        Sum(int op1, int op2) : Operation(op1, op2) {}
        virtual int operation() const override {return get_op1() + get_op2();}
};

#endif