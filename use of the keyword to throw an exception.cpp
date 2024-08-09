#include <iostream>
int main() {
    try {
        int x = 5;
        if (x == 5) {
            throw "Exception thrown!";
        }
    } catch (const char* e) {
        std::cerr << "Caught exception: " << e << std::endl;
    }
    return 0;
}
