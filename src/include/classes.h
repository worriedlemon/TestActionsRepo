/// @file classes.h
/// @brief Header file with math classes
/// @author Shteynberg Emil
/// @copyright MICIT "TOP Academy"
/// @date 2026/03/11

#pragma once

#ifndef CLASSES_H
#define CLASSES_H

namespace math
{

/// @class Fraction
/// @brief Fraction class
class Fraction
{
protected:
    int num;        ///< Numerator
    unsigned denom; ///< Denominator

public:
    /// @brief Contructor
    /// @param[in] num numerator
    /// @param[in] denom denominator
    Fraction(int num, unsigned denom);
};

/// @class CoolFraction
/// @brief Very cool fraction class
class CoolFraction : public Fraction
{
public:
    /// @brief Constructor
    /// @param[in] num numerator
    /// @param[in] denom denominator
    CoolFraction(int num, unsigned denom);

    /// @brief Print out the fraction in format "x/y"
    void print();
};

} // namespace math

#endif // CLASSES_H