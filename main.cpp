#include <iostream>
#include "VE3D.h"

using namespace std;

int main()
{

    Vector3D *v1 = new Vector3D(2,2,2);
    Vector3D *v2 = new Vector3D(1,1,1);
    //wyswietlenie wartosci wektorow
    v1->displayResult(*v1);
    v2->displayResult(*v2);
    cout<<endl;
    v1->addVector(*v1,*v2);
    v1->displayResult(*v1);
    return 0;
}
