#include <iostream>
#include <cmath>
int main() {
    double base, exponent, result;
    std::cout << "Enter the base number: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
    result = pow(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;
    return 0;
}