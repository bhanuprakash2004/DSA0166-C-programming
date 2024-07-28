#include <iostream>

class Number {
private:
    int value;

public:
    // Constructor to initialize value
    Number(int v = 0) : value(v) {}

    // Friend function declaration
    friend int findMax(const Number& num1, const Number& num2);
};

// Friend function definition
int findMax(const Number& num1, const Number& num2) {
    return (num1.value > num2.value) ? num1.value : num2.value;
}

int main() {
    Number num1(45);
    Number num2(78);

    std::cout << "The maximum value is: " << findMax(num1, num2) << std::endl;

    return 0;
}
 