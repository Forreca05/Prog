#include "Operation.h"
#include <cmath>

class Power : public Operation {
public:
    Power(int op1, int op2) : Operation(op1, op2) {};
    int operation() const override final {
        return pow(get_op1(), get_op2());
    }
};