#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){int n;cout<<"Enter number of students: ";cin>>n;if(n<0)return 1;map<int,string>students;for(int i=0;i<n;++i){int roll;string name;cout<<"Enter roll and name: ";cin>>roll>>name;students[roll]=name;}cout<<"\nStudent records:\n";for(const auto&[roll,name]:students)cout<<"Roll: "<<roll<<", Name: "<<name<<'\n';}
