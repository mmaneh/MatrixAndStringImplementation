#include "matrix.h"

Matrix::Matrix() {
    row_ = 0;
    col_ = 0;
    data_ = nullptr;
}

Matrix::Matrix(int row, int col) : row_(row), col_(col){
    data_ = new double*[row_];
    for (int i = 0; i < row_; ++i) {
        data_[i] = new double[col_];
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < row_; ++i) {
        delete[] data_[i];
    }
    delete[] data_;
    row_ = 0;
    col_ = 0;
    data_ = nullptr;
    
}

void Matrix::set(size_t row, size_t col, double value) {
    if(row >= row_ || col >= col_) {
        std::cout << "you went over the bounds of the matrix" << std::endl;
        return;
    }
    data_[row][col] = value;
}
double Matrix::get(size_t row, size_t col)const {
    if(row >= row_ || col >= col_) {
        std::cout << "you went over the bounds of the matrix" << std::endl;
        return 0;
    }
    return data_[row][col];
}
size_t Matrix::getRows() const {
    return row_;
}

size_t Matrix::getCols() const {
    return col_;
}

void Matrix::print() const {
    for (int i = 0; i < row_; ++i) {
        for (int j = 0; j < col_; ++j) {
            std::cout << data_[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

