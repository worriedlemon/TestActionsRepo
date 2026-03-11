/// @file functions.h
/// @brief Header file with math function declarations
/// @author Shteynberg Emil
/// @copyright MICIT "TOP Academy"
/// @date 2026/03/11

#pragma once

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdexcept>
#include <cmath>

/// @brief Namespace with math objects
/// @version v1.0.0
namespace math
{

/// @brief Square root function
/// @details Obtains square root from real positive number.
/// In case of incorrect data throws exceptions.
/// @param[in] value Real number
/// @returns Sqaure root of `value`
/// @throws std::invalid_argument if `value` is negative, infinite or `NaN`
double MySqrt(double value);

/// @brief Lograithm function
/// @details Obtains specified base logarithm of given value
/// @param[in] base Logarithm base
/// @param[in] value Real number
/// @returns @f$\log_{base}{value}@f$ 
/// @throws std::invalid_argument if `base <= 0` or `base = 1`, and if `value <= 0`
double MyLog(double base, double value);

} // namespace math

#endif // FUNCTIONS_H