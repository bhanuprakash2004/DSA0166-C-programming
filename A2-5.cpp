#include <iostream>

class Class2; // Forward declaration of Class2

class Class1 {
private:
    int value;

public:
    // Constructor to initialize value
    Class1(int v = 0) : value(v) {}

    // Friend function declaration
    friend void swapValues(Class1& obj1, Class2& obj2);

    // Function to display value
    void display() const {
        std::cout << "Class1 value: " << value << std::endl;
    }
};

class Class2 {
private:
    int value;

public:
    // Constructor to initialize value
    Class2(int v = 0) : value(v) {}

    // Friend function declaration
    friend void swapValues(Class1& obj1, Class2& obj2);

    // Function to display value
    void display() const {
        std::cout << "Class2 value: " << value << std::endl;
    }
};

// Friend function definition
void swapValues(Class1& obj1, Class2& obj2) {
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
}

int main() {
    Class1 obj1(100);
    Class2 obj2(200);

    std::cout << "Before swapping:" << std::endl;
    obj1.display();
    obj2.display();

    swapValues(obj1, obj2);

    std::cout << "After swapping:" << std::endl;
    obj1.display();
    obj2.display();

    return 0;
}
