#include <iostream>

int main() {
    try {
        int x = 5 / 0; // Division by zero
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
