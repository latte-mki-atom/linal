#ifndef MATRIX3D_H_INCLUDED
#define MATRIX3D_H_INCLUDED

#include "vector3d.h"

class Matrix3D
{
private:
    double x11, x12, x13;
    double x21, x22, x23;
    double x31, x32, x33;
public:
    Matrix3D();
    Matrix3D(double n11, double n12, double n13, double n21, double n22, double n23, double n31, double n32, double n33);
    ~Matrix3D();
    Matrix3D operator*(double n) const;
    Matrix3D operator+(const Matrix3D & b) const;
    Matrix3D operator-(const Matrix3D & b) const;
    Matrix3D operator*(const Matrix3D & b) const;
    Vector3D operator*(const Vector3D & b) const;
    double det() const;
};

Matrix3D::Matrix3D(double n11, double n12, double n13, double n21, double n22, double n23, double n31, double n32, double n33)
{
    this->x11 = n11;
    this->x12 = n12;
    this->x13 = n13;
    this->x21 = n21;
    this->x22 = n22;
    this->x23 = n23;
    this->x31 = n31;
    this->x32 = n32;
    this->x33 = n33;
}

Matrix3D::~Matrix3D()
{
}

Matrix3D Matrix3D::operator*(double n) const
{
    return Matrix3D(x11*n, x12*n, x13*n, x21*n, x22*n, x23*n, x31*n, x32*n, x33*n);
}

Matrix3D Matrix3D::operator+(const Matrix3D & b) const
{
    return Matrix3D(x11 + b.x11, x12 + b.x12, x13 + b.x13, x21 + b.x21, x22 + b.x22, x23 + b.x23, x31 + b.x31, x32 + b.x32, x33 + b.x33);
}

Matrix3D Matrix3D::operator-(const Matrix3D & b) const
{
    return Matrix3D(x11 - b.x11, x12 - b.x12, x13 - b.x13, x21 - b.x21, x22 - b.x22, x23 - b.x23, x31 - b.x31, x32 - b.x32, x33 - b.x33);
}

Matrix3D Matrix3D::operator*(const Matrix3D & b) const
{
    return Matrix3D(x11 * b.x11 + x12 * b.x21 + x13 * b.x31, x11 * b.x12 + x12 * b.x22 + x13 * b.x32, x11 * b.x13 + x12 * b.x23 + x13 * b.x33, x21 * b.x11 + x22 * b.x21 + x23 * b.x31, x21 * b.x12 + x22 * b.x22 + x23 * b.x32, x21 * b.x13 + x22 * b.x23 + x23 * b.x33, x31 * b.x11 + x32 * b.x21 + x33 * b.x31, x31 * b.x12 + x32 * b.x22 + x33 * b.x32, x31 * b.x13 + x32 * b.x23 + x33 * b.x33);
}

Vector3D Matrix3D::operator*(const Vector3D & b) const
{
    return Vector3D(x11 * b.x + x12 * b.y + x13 * b.z, x21 * b.x + x22 * b.y + x23 * b.z,x31 * b.x + x32 * b.y + x33 * b.z);
}

double Matrix3D::det() const
{
    return(x11 * (x22 * x33 - x23 * x32) - x12 * (x21 * x33 - x23 * x31) + x13 * (x21 * x32 - x22 * x31));
}

#endif // MATRIX3D_H_INCLUDED
