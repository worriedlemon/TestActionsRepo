#include <iostream>
#include <functions.h>

int main()
{
    std::cout << "Enter your number: ";

    double value;
    std::cin >> value;

    try
    {
        double sqrt_value = math::MySqrt(value);
        std::cout << "\nSquare root of " << value << " is " << sqrt_value << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Could not get square root of " << value << ": " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}