#include <iostream>
#include "VE3D.h"
#include "math.h"

using namespace std;

Vector3D::Vector3D(double _x, double _y, double _z)
{
    this->x = _x;
    this->y = _y;
    this->z = _z;
    //this->vectorValue = _vectorValue;
}
double Vector3D::addVector(Vector3D &v1, Vector3D &v2)
{
    v1.x = v1.x + v2.x;
    v1.y = v1.y + v2.y;
    v1.z = v1.z + v2.z;
}
string Vector3D::displayResult(Vector3D& resultVector)
{
    cout<<"Wektor:["<<resultVector.x<<","<<resultVector.y<<","<<resultVector.z<<"]"<<endl;
}

double Vector3D::scalarMultiplication(Vector3D& v1, Vector3D& v2)
{
    v1.x = v1.x*v2.x;
    v1.y = v1.y*v2.y;
    v1.z = v1.z*v2.z;
}
double Vector3D::getValue(Vector3D v1)
{
    double val = 0;
    val = sqrt(pow(v1.x,2) + pow(v1.y,2) + pow(v1.z,2));
    return val;
}
double Vector3D::vectorProduct(Vector3D& v1, Vector3D& v2)
{
	//double result = 0;
	//result = getValue(v1)*getValue(v2);
	//return result;
}


