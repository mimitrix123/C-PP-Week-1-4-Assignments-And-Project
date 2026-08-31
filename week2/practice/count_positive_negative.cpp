#include <iostream>
using namespace std;
int main(){int n;cin>>n;if(n<=0)return 0;int x,pos=0,neg=0,zero=0;for(int i=0;i<n;i++){cin>>x;if(x>0)++pos;else if(x<0)++neg;else ++zero;}cout<<"Positive = "<<pos<<"\nNegative = "<<neg<<"\nZero = "<<zero<<'\n';}
