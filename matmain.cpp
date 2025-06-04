#include "matrix.h"
#include <iostream>

int main() {
    // Create matrix
    Matrix mat(3, 4);

    // Fill matrix
    for (size_t i = 0; i < mat.getRows(); ++i) {
        for (size_t j = 0; j < mat.getCols(); ++j) {
            mat.set(i, j, i + j); 
        }
    }

    // Print the matrix
    std::cout << "Matrix contents:" << std::endl;
    mat.print();

    // Get the member
    std::cout << "Element at (1, 2): " << mat.get(1, 2) << std::endl;

    return 0;
}
