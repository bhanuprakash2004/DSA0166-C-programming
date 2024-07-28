#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows, cols;

public:
    // Constructor to initialize matrix dimensions
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, std::vector<int>(cols, 0));
    }

    // Function to insert an element at a specific position
    void insert(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        } else {
            std::cerr << "Invalid index\n";
        }
    }

    // Function to retrieve an element at a specific position
    int retrieve(int r, int c) const {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        } else {
            std::cerr << "Invalid index\n";
            return -1; // Return an invalid value indicating error
        }
    }

    // Function to display the matrix
    void display() const {
        for (const auto &row : data) {
            for (const auto &elem : row) {
                std::cout << elem << " ";
            }
            std::cout << "\n";
        }
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> rows >> cols;

    Matrix mat(rows, cols);

    int value;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value for element (" << i << ", " << j << "): ";
            std::cin >> value;
            mat.insert(i, j, value);
        }
    }

    std::cout << "The matrix is:\n";
    mat.display();

    int r, c;
    std::cout << "Enter the position to retrieve value (row and column): ";
    std::cin >> r >> c;
    int retrievedValue = mat.retrieve(r, c);
    if (retrievedValue != -1) {
        std::cout << "Value at position (" << r << ", " << c << ") is " << retrievedValue << "\n";
    }

    return 0;
}
