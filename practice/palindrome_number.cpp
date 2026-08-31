#include <iostream>
using namespace std;
int main(){long long n;cout<<"Enter a number: ";cin>>n;if(n<0){cout<<"Not a palindrome.\n";return 0;}long long original=n,reversed=0;while(n>0){reversed=reversed*10+n%10;n/=10;}cout<<(original==reversed?"Palindrome.\n":"Not a palindrome.\n");return 0;}
