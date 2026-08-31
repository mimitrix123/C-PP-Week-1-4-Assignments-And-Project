#include <iostream>
using namespace std;
class Box{double l,w,h;public:Box():l(1),w(1),h(1){}Box(double s):l(s),w(s),h(s){}Box(double a,double b,double c):l(a),w(b),h(c){}double volume()const{return l*w*h;}};
int main(){Box a;Box b(3);Box c(2,3,4);cout<<a.volume()<<'\n'<<b.volume()<<'\n'<<c.volume()<<'\n';}
