#include <iostream>

class MyClass {
private:
    static int objectCount;

public:
    MyClass() {
        ++objectCount;
    }
    ~MyClass() {
        --objectCount;
    }

    static void showcount() {
        std::cout << "Number of objects created: " << objectCount << std::endl;
    }
};

int MyClass::objectCount = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::showcount();

    {
        MyClass obj4;
        MyClass::showcount(); 
    }
    MyClass::showcount(); 
    return 0;
}
