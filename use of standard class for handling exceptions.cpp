#include <iostream>
#include <stdexcept>
int main() {
    try {
        throw std::runtime_error("Division by zero!");
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught std::runtime_error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught std::exception: " << e.what() << std::endl;
    }
    return 0;
}
