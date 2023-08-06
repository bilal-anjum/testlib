#include "mathfuncs.h"

namespace MathFuncs
{

    int add(int num1, int num2)
    {
        return (num1 + num2);
    }

    int sub(int from, int value)
    {
        return (from - value);
    }

    int mult(int num1, int num2)
    {
        return (num1 * num2);
    }

    int div(int num, int divisor)
    {
        return (int)(num /divisor);
    }

} // namespace MathFuncs
