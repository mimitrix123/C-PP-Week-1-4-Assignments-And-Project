#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter a number: ";cin>>n;long long value=n<0?-n:n;int sum=0;while(value>0){sum+=value%10;value/=10;}cout<<"Sum of digits = "<<sum<<'\n';return 0;}
