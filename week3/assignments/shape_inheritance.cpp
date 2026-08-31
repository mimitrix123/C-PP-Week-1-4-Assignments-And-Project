#include <iostream>
#include <iomanip>
using namespace std;
class Shape{protected:double dimension;public:explicit Shape(double d):dimension(d){}virtual double area()const=0;virtual~Shape()=default;};
class Rectangle:public Shape{double width;public:Rectangle(double l,double w):Shape(l),width(w){}double area()const override{return dimension*width;}};
class Circle:public Shape{public:explicit Circle(double r):Shape(r){}double area()const override{return 3.141592653589793*dimension*dimension;}};
int main(){Rectangle r(10,5);Circle c(7);cout<<fixed<<setprecision(2)<<"Rectangle area: "<<r.area()<<"\nCircle area: "<<c.area()<<'\n';}
