#include <iostream>

int main() {
    try {
        try {
            int x = 5 / 0;
        } catch (const std::exception& e) {
            std::cerr << "Inner catch: " << e.what() << std::endl;
            throw; 
        }
    } catch (const std::exception& e) {
        std::cerr << "Outer catch: " << e.what() << std::endl;
    }
    return 0;
}
