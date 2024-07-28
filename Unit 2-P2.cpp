#include <iostream>
using namespace std;
int main() {
    const int numSubjects = 5;
    int marks[numSubjects];
    int totalMarks = 0;
    float aggregate;
    string grade;
    cout << "Please enter the marks of five subjects: ";
    for (int i = 0; i < numSubjects; ++i) {
        cin >> marks[i];
        totalMarks += marks[i];
    }
    aggregate = totalMarks / static_cast<float>(numSubjects);
    if (aggregate > 75) {
        grade = "Distinction";
    } else if (aggregate >= 60) {
        grade = "First Division";
    } else if (aggregate >= 50) {
        grade = "Second Division";
    } else if (aggregate >= 40) {
        grade = "Third Division";
    } else {
        grade = "Fail";
    }
    cout << "Total Marks      = " << totalMarks << endl;
    cout << "Average Marks    = " << aggregate << endl;
    cout << "Marks Percentage = " << aggregate << "%" << endl;
    cout << "Grade            = " << grade << endl;
    return 0;
}