#include <iostream>
class MaxFinder {
private:
    int num1;
    int num2;
public:
	MaxFinder(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    friend int findMax(MaxFinder mf) {
        return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
    }
};
int main() {
    MaxFinder mf(10, 20);
    int max = findMax(mf);
    std::cout << "Maximum: " << max << std::endl;
    return 0;
}