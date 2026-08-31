#include <iostream>
using namespace std;
int main(){long long n,reversed=0;cout<<"Enter a number: ";cin>>n;long long value=n<0?-n:n;while(value>0){reversed=reversed*10+value%10;value/=10;}if(n<0)reversed=-reversed;cout<<"Reversed number = "<<reversed<<'\n';return 0;}
