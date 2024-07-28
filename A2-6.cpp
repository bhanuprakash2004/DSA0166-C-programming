#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Friend function to add two complex numbers
    friend Complex addComplex(const Complex& c1, const Complex& c2);

    // Function to display the complex number
    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};

// Definition of the friend function
Complex addComplex(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    Complex sum = addComplex(num1, num2);

    std::cout << "First Complex Number: ";
    num1.display();
    std::cout << "Second Complex Number: ";
    num2.display();
    std::cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}
