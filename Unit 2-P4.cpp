#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    string regNo;
    int mark1, mark2, mark3;
    float average;
    char grade;
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter registration number: ";
        cin >> regNo;
        cout << "Enter marks for three subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }
    void calculateAverageAndGrade() {
        average = (mark1 + mark2 + mark3) / 3.0;
        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }
    void display() {
        cout << "Name: " << name << ", Registration Number: " << regNo << endl;
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Average: " << average << ", Grade: " << grade << endl;
    }
};
int main() {
    const int numStudents = 3;
    Student students[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].input();
        students[i].calculateAverageAndGrade();
    }
    cout << "\nStudent Records:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].display();
        cout << endl;
    }
    return 0;
}