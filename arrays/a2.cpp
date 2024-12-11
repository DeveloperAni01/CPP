#include <iostream>
using namespace std;

int** add(int rows, int cols) {
    // Allocate memory for the matrix (rows x cols)
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Populate the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (i + 1) * (j + 1) * 10; // Example value
        }
    }

    return matrix;
}

int main() {
    int rows = 3, cols = 4;

    // Get the matrix
    int** matrix = add(rows, cols);

    // Print the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
