#include <iostream>
class complex {
private:
    double real;
    double imag;
public:
    complex(double r = 0, double i = 0) : real(r), imag(i) {}
    friend complex add(const complex& c1, const complex& c2) {
        return complex(c1.real + c2.real, c1.imag + c2.imag);
    }
    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};
int main() {
    complex c1(3, 4);
    complex c2(2, 5);
    std::cout << "Complex number 1: ";
    c1.display();
    std::cout << "Complex number 2: ";
    c2.display();
    complex sum = add(c1, c2);
    std::cout << "Sum: ";
  sum.display();
    return 0;
}