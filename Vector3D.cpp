//Vector3D.cpp

#include "Vector3D.h"

int main () {

  Vector3D v1(2.,0.,0);
  
  v1.magnitude();
  v1.print();

  v1.setVector3D(1.,2.,3.);
  v1.magnitude();
  v1.print();

  return 0;

}
