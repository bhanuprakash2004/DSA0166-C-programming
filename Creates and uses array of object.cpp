#include <iostream>
#include <string>
class Manager {
private:
    std::string name;
    int age;
    std::string department;
public:
    Manager(std::string n, int a, std::string d) {
        name = n;
        age = a;
        department = d;
    }
    std::string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    std::string getDepartment() {
        return department;
    }
};
int main() {
    Manager managers[3] = {
        Manager("John Smith", 45, "Sales"),
        Manager("Jane Doe", 40, "Marketing"),
        Manager("Bob Johnson", 50, "IT")
    };
    for (int i = 0; i < 3; i++) {
        std::cout << "Manager " << i + 1 << ":" << std::endl;
        std::cout << "Name: " << managers[i].getName() << std::endl;
        std::cout << "Age: " << managers[i].getAge() << std::endl;
        std::cout << "Department: " << managers[i].getDepartment() << std::endl;
        std::cout << std::endl;
    }
    return 0;
}