#include <iostream>
using namespace std;
class Calculator{public:int add(int a,int b)const{return a+b;}double add(double a,double b)const{return a+b;}int add(int a,int b,int c)const{return a+b+c;}};
int main(){Calculator c;cout<<c.add(2,3)<<'\n'<<c.add(2.5,3.5)<<'\n'<<c.add(1,2,3)<<'\n';}
