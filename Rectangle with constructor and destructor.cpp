#include <iostream>
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double rectLength, double rectWidth)
        : length(rectLength), width(rectWidth) {
        std::cout << "Constructor called for rectangle with length: " << length << " and width: " << width << std::endl;
    }
    ~Rectangle() {
        std::cout << "Destructor called for rectangle with length: " << length << " and width: " << width << std::endl;
    }
    void display() const {
        std::cout << "Rectangle Length: " << length << std::endl;
        std::cout << "Rectangle Width: " << width << std::endl;
    }
    double area() const {
        return length * width;
    }
};
int main() {
    Rectangle rect1(7, 14.5);
    rect1.display();
    std::cout << "Rectangle Area: " << rect1.area() << std::endl;
    return 0;
}