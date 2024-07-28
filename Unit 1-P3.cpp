#include <iostream>
#include <bitset>
int main() {
    unsigned int number, n;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Enter the bit position to set (0-indexed): ";
    std::cin >> n;
    if (n < 8 * sizeof(unsigned int)) { 
        unsigned int mask = 1 << n;
        number = number | mask;   
        std::cout << "The new number with the " << n << "th bit set is: " << number << std::endl;
        std::cout << "Binary representation: " << std::bitset<32>(number) << std::endl;
    } else {
        std::cout << "Error: Bit position out of range." << std::endl;
}
    return 0;
}