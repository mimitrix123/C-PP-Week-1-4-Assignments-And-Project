#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){int n; cout<<"Enter number of elements: "; cin>>n; if(n<=0){cout<<"Number of elements must be positive.\n";return 0;} vector<double>a(n); double sum=0; cout<<"Enter "<<n<<" elements: "; for(double &x:a){cin>>x;sum+=x;} cout<<fixed<<setprecision(2)<<"Sum = "<<sum<<'\n'<<"Average = "<<sum/n<<'\n'; return 0;}
