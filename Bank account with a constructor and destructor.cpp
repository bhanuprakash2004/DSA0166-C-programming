#include <iostream>
#include <string>
class BankAccount {
private:
    std::string accountHolderName;
    std::string accountNumber;
    double balance;
public:
    BankAccount(const std::string& holderName, const std::string& acctNumber, double acctBalance)
        : accountHolderName(holderName), accountNumber(acctNumber), balance(acctBalance) {
        std::cout << "Constructor called for account holder: " << accountHolderName << std::endl;
    }
    ~BankAccount() {
        std::cout << "Destructor called for account holder: " << accountHolderName << std::endl;
    }
    void display() const {
        std::cout << "Account Holder Name: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};
int main() {
    BankAccount account1("kishore", "9959453+03", 1000.9845);
    account1.display();
    return 0;
}