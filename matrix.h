#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>


class Matrix{

    private:
        size_t row_;
        size_t col_;
        double** data_;
    public:
        Matrix();
        Matrix(const Matrix& otr);
        Matrix(Matrix&& otr);
        Matrix(int row, int col);
        ~Matrix();

        void set(size_t row, size_t col, double value);
        double get(size_t row, size_t col)const;
        size_t getRows() const;
        size_t getCols() const;
        void print() const;
    };
#endif
