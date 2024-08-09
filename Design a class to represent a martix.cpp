#include <iostream>
#include <vector>
class Matrix {
private:
    int rows;
    int cols;
    std::vector<std::vector<int>> data;
public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, std::vector<int>(cols, 0));
    }
    void insert(int row, int col, int value) {
        data[row][col] = value;
    }
    int retrieve(int row, int col) {
        return data[row][col];
    }
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << data[i][j] << " ";
            }
std::cout << std::endl;
        }
    }
};
int main() {
    Matrix matrix(3, 3);
    matrix.insert(0, 0, 1);
    matrix.insert(0, 1, 2);
    matrix.insert(0, 2, 3);
    matrix.insert(1, 0, 4);
    matrix.insert(1, 1, 5);
    matrix.insert(1, 2, 6);
    matrix.insert(2, 0, 7);
    matrix.insert(2, 1, 8);
    matrix.insert(2, 2, 9);
    std::cout << "Matrix:" << std::endl;
    matrix.display();
    std::cout << "Element at (1, 2): " << matrix.retrieve(1, 2) << std::endl;
    return 0;
}