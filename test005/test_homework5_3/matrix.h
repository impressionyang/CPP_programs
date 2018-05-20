#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
class Matrix{
private:
    int matrix[2][3];
public:
    Matrix();
    Matrix(int array_get[2][3]);
    friend Matrix operator +(Matrix &a,Matrix&b);
    void display();
};


#endif // MATRIX_H_INCLUDED
