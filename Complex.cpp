#include<iostream>
#include<cmath>
using namespace std;

class Complex{
public:
  Complex(){}
  void setVal(double x, double y){
    x_=x;
    y_=y;
  }
  void print(double x, double y){
    double r=sqrt(pow(x,2)+pow(y,2));
    cout<<"rho= "<<r<<endl;
  }
private:
  double x_,y_;
};

int main(){
  // double x1=3,x2=4;
  Complex p1;
  p1.print(3,4);

}
