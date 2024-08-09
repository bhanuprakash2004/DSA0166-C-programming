#include <iostream>

int main() {
    try {
        int x = 5;
        if (x == 5) {
            throw "Exception thrown!"; 
        } else {
            throw 20;
        }
    } catch (const char* e) {
        std::cerr << "Caught const char* exception: " << e << std::endl;
    } catch (int e) {
        std::cerr << "Caught int exception: " << e << std::endl;
    } catch (...) {
        std::cerr << "Caught unknown exception!" << std::endl;
    }
    return 0;
}
