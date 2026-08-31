#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){int n;cout<<"Enter number of elements: ";cin>>n;if(n<0)return 1;vector<int>v(n);cout<<"Enter elements: ";for(int&x:v)cin>>x;sort(v.begin(),v.end());cout<<"Sorted vector: ";for(int x:v)cout<<x<<' ';cout<<'\n';}
