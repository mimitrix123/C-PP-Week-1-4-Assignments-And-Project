#include <iostream>
using namespace std;
long long factorial(int n){return n<=1?1:n*factorial(n-1);}int main(){int n;cin>>n;if(n<0||n>20)return 0;cout<<factorial(n)<<'\n';}
