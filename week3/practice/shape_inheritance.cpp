#include <iostream>
#include <iomanip>
using namespace std;
class Shape{protected:double value;public:explicit Shape(double v):value(v){}virtual double area()const=0;virtual~Shape()=default;};
class Circle:public Shape{public:explicit Circle(double r):Shape(r){}double area()const override{return 3.141592653589793*value*value;}};
class Rectangle:public Shape{double width;public:Rectangle(double l,double w):Shape(l),width(w){}double area()const override{return value*width;}};
int main(){Circle c(5);Rectangle r(6,4);cout<<fixed<<setprecision(2)<<c.area()<<'\n'<<r.area()<<'\n';}
