#include "Operation.h"

class Sum : public Operation {
public:    
    Sum(int op1, int op2) : Operation(op1, op2) {}
    int operation() const override final {
        return get_op1() + get_op2();
    }
};