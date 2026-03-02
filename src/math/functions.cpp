#include <functions.h>

namespace math
{

double MySqrt(double value)
{
    if (std::isinf(value))
    {
        return value;
    }
    
    if (std::isnan(value))
    {
        throw std::logic_error("Value is NaN!");
    }

    if (value < 0.0)
    {
        throw std::logic_error("Square root from negative number is prohibited!"); 
    }
    
    return ::sqrt(value);
}

} // namespace math