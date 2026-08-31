#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& a){for(size_t i=0;i<a.size();++i){bool swapped=false;for(size_t j=0;j+1<a.size()-i;++j)if(a[j]>a[j+1]){swap(a[j],a[j+1]);swapped=true;}if(!swapped)break;}}
int main(){int n;cin>>n;if(n<=0)return 0;vector<int>a(n);for(int&x:a)cin>>x;bubbleSort(a);for(int x:a)cout<<x<<' ';cout<<'\n';}
