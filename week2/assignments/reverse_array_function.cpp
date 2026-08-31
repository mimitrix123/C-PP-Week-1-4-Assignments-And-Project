#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int>& a){int l=0,r=(int)a.size()-1;while(l<r)swap(a[l++],a[r--]);}
int main(){int n;cin>>n;if(n<=0)return 0;vector<int>a(n);for(int&x:a)cin>>x;reverseArray(a);for(int x:a)cout<<x<<' ';cout<<'\n';}
