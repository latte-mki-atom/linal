#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "matrix3d.h"
#include "vector3d.h"

using namespace std;

int main()
{
    Matrix3D a = Matrix3D(1, 0, 0, 0, 1, 0, 0, 0, 1);
    double k;
    k = a.det();
    cout << k << endl;
}
