#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double number, result;
    cout << "Enter a number: ";
    cin >> number;
    result = cbrt(number);
    if (number == 0) {
       cout << "The cube root of 0 is 0." << endl;
    } else if (number > 0) {
        cout << "The cube root of " << number << " is " << result << endl;
    } else {
        cout << "The cube root of " << number << " is " << result << " (Note: It's a negative number)" << endl;
    }
    return 0;
}