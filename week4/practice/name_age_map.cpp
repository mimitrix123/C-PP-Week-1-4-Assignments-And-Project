#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){int n;cin>>n;if(n<0)return 1;map<string,int>people;for(int i=0;i<n;++i){string name;int age;cin>>name>>age;people[name]=age;}for(const auto&[name,age]:people)cout<<name<<" -> "<<age<<'\n';}
