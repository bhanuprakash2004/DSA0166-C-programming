#include <iostream>
using namespace std;
int main() {
    const int size = 6;
    char arr[size] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char* ptr = arr;
    cout << "The values in the array are: ";
    for (int i = 0; i < size - 1; ++i) {
        cout << *(ptr + i);
    }

    return 0;
}