//Vector3D.h

class Vector3D {
 public:
  //constructor
  Vector3D(double x, double y, double z);

  //getters
  double getx();
  double gety();
  double getz();

  //setters
  void setVector3D(double x, double y, double z);
  
  //funzioni
  double magnitude();

  //print
  void print();
 

 private:
  double x_;
  double y_;
  double z_;
};
