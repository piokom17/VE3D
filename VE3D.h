#include <iostream>
#include "math.h"
using namespace std;

class Vector3D
{


public:
    //constructor and destructor
    double x;
    double y;
    double z;
    double vectorValue;

    Vector3D(double _x, double _y, double _z);
    ~Vector3D();

    void load();
    double addVector(Vector3D& v1, Vector3D& v2);
    double scalarMultiplication(Vector3D& v1, Vector3D& v2);
    double getValue(Vector3D v1);
    string displayResult(Vector3D& resultVector);
    double vectorProduct(Vector3D& v1, Vector3D& v2);


};
