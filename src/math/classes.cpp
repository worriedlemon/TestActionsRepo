/// @file classes.cpp
/// @brief Source code file with math classes implementation
/// @author Shteynberg Emil
/// @copyright MICIT "TOP Academy"
/// @date 2026/03/11

#include <classes.h>

#include <iostream>

namespace math
{

Fraction::Fraction(int num, unsigned denom)
    : num(num)
    , denom(denom)
{}

CoolFraction::CoolFraction(int num, unsigned denom)
    : Fraction(num, denom)
{}

void CoolFraction::print()
{
    std::cout << num << "/" << denom;
}

}