#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int countVowels(const string& s){int c=0;for(unsigned char ch:s){char x=(char)tolower(ch);if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')++c;}return c;}
int main(){string s;getline(cin>>ws,s);cout<<"Vowels = "<<countVowels(s)<<'\n';}
