#include <iostream>
#include <string>

class Manager {
private:
    std::string name;
    int age;

public:
    // Constructor
    Manager(const std::string& name = "", int age = 0) : name(name), age(age) {}

    // Function to set manager details
    void setDetails(const std::string& name, int age) {
        this->name = name;
        this->age = age;
    }

    // Function to display manager details
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    const int numManagers = 3;
    Manager managers[numManagers];

    // Setting details for each manager
    managers[0].setDetails("John Doe", 45);
    managers[1].setDetails("Jane Smith", 38);
    managers[2].setDetails("Emily Davis", 50);

    // Displaying details of each manager
    std::cout << "List of Managers:" << std::endl;
    for (int i = 0; i < numManagers; ++i) {
        managers[i].display();
    }

    return 0;
}
