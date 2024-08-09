#include <iostream>
class class_2; 
class class_1 {
private:
    int data_1;
public:
    class_1(int d) : data_1(d) {}
    friend void swap(class_1&, class_2&);
    int getData1() const { return data_1; }
};
class class_2 {
private:
    int data_2;
public:
    class_2(int d) : data_2(d) {}
    friend void swap(class_1&, class_2&);
    int getData2() const { return data_2; }
};
void swap(class_1& c1, class_2& c2) {
    int temp = c1.data_1;
    c1.data_1 = c2.data_2;
    c2.data_2 = temp;
}
int main() {
    class_1 obj1(10);
    class_2 obj2(20);
    std::cout << "Before swap: " << std::endl;
    std::cout << "obj1.data_1 = " << obj1.getData1() << std::endl;
    std::cout << "obj2.data_2 = " << obj2.getData2() << std::endl;
    swap(obj1, obj2);
    std::cout << "After swap: " << std::endl;
    std::cout << "obj1.data_1 = " << obj1.getData1() << std::endl;
    std::cout << "obj2.data_2 = " << obj2.getData2() << std::endl;
    return 0;
}