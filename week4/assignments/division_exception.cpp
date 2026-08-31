#include <iostream>
#include <stdexcept>
using namespace std;
double divide(double a,double b){if(b==0)throw runtime_error("Division by zero is not allowed.");return a/b;}
int main(){double a,b;cout<<"Enter dividend and divisor: ";cin>>a>>b;try{cout<<"Result = "<<divide(a,b)<<'\n';}catch(const exception&e){cerr<<"Error: "<<e.what()<<'\n';return 1;}}
