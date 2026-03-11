/// @file functions.cpp
/// @brief Source code file with math function definitions
/// @author Shteynberg Emil
/// @copyright MICIT "TOP Academy"
/// @date 2026/03/11

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


double MyLog(double base, double value)
{
    if (base <= 0.0 || base == 1)
    {
        throw std::logic_error("Invalid base argument!"); 
    }

    return ::log(value) / ::log(base);
}

} // namespace math