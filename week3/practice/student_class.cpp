#include <iostream>
#include <string>
using namespace std;
class Student{string name;double marks;public:Student(string n,double m):name(n),marks(m){}void display()const{cout<<"Name: "<<name<<"\nMarks: "<<marks<<'\n';}};
int main(){Student s("Mimi",92.5);s.display();}
