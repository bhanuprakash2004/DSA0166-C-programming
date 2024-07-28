#include <iostream>
#include <string>
using namespace std;
bool isUsernameValid(const string& username1, const string& username2) {
    return username1 == username2;
}
int main() {
    string username1, username2;
    cout << "Enter the username: ";
    getline(cin, username1); 
    cout << "Reenter the username: ";
    getline(cin, username2);
    if (isUsernameValid(username1, username2)) {
        cout << "Username is valid" << endl;
    } else {
        cout << "Username is invalid" << endl;
    }
    return 0;
}