#include <iostream>
using namespace std;
unsigned long long factorial(int n){if(n<0)return 0;if(n<=1)return 1;return static_cast<unsigned long long>(n)*factorial(n-1);}
int main(){int n;cout<<"Enter a non-negative integer: ";cin>>n;if(n<0||n>20){cout<<"Please enter a value from 0 to 20.\n";return 0;}cout<<n<<"! = "<<factorial(n)<<'\n';}
