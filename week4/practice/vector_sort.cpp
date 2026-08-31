#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cin>>n;if(n<0)return 1;vector<int>v(n);for(int&x:v)cin>>x;sort(v.begin(),v.end());for(int x:v)cout<<x<<' ';cout<<'\n';}
