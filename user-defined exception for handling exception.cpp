#include <iostream>
class MyException : public std::exception {
public:
    const char* what() const throw() {
        return "Custom exception occurred!";
    }
};
int main() {
    try {
        throw MyException();
    } catch (const MyException& e) {
        std::cerr << "Caught MyException: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught std::exception: " << e.what() << std::endl;
    }
    return 0;
}