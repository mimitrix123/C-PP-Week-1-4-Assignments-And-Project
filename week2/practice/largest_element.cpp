#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){int n;cin>>n;if(n<=0)return 0;vector<int>a(n);for(int&x:a)cin>>x;cout<<"Largest = "<<*max_element(a.begin(),a.end())<<'\n';}
