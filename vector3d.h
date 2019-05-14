#ifndef VECTOR3D_H_INCLUDED
#define VECTOR3D_H_INCLUDED

#include "matrix3d.h"
class Vector3D
{
public:
    double x, y, z;
public:
    Vector3D();
    Vector3D(double n1, double n2, double n3);
    ~Vector3D();
    double operator*(const Vector3D & b) const;
    Vector3D operator*(double n) const;
    Vector3D operator+(const Vector3D & b) const;
    Vector3D operator-(const Vector3D & b) const;
    friend Vector3D operator*(double n, const Vector3D &a);
};

Vector3D::Vector3D(double n1, double n2, double n3)
{
    this->x = n1;
    this->y = n2;
    this->z = n3;
}

Vector3D::~Vector3D()
{
}

double Vector3D::operator*(const Vector3D & b) const
{
    return (x*b.x + y*b.y + z*b.z);
}

Vector3D Vector3D::operator*(double n) const
{
    return Vector3D(n*x, n*y, n*z);
}

Vector3D Vector3D::operator+(const Vector3D & b) const
{
    return Vector3D(x + b.x, y + b.y, z + b.z);
}

Vector3D Vector3D::operator-(const Vector3D & b) const
{
    return Vector3D(x - b.x, y - b.y, z - b.z);
}

Vector3D operator*(double n, const Vector3D &a)
{
    return a*n;
}


#endif // VECTOR3D_H_INCLUDED
