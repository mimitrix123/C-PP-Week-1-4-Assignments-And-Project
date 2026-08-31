#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
struct Student{string name;vector<double> marks;};
double total(const vector<double>&m){double s=0;for(double x:m)s+=x;return s;}
double average(const vector<double>&m){return m.empty()?0:total(m)/m.size();}
char grade(double a){if(a>=90)return'A';if(a>=80)return'B';if(a>=70)return'C';if(a>=60)return'D';return'F';}
void report(const Student&s){double a=average(s.marks);cout<<"\n========== STUDENT REPORT ==========\nName: "<<s.name<<"\nMarks: ";for(double m:s.marks)cout<<m<<' ';cout<<"\nTotal: "<<total(s.marks)<<"\nAverage: "<<a<<"\nGrade: "<<grade(a)<<"\n====================================\n";}
int main(){Student s;int n;cout<<"Enter student name: ";getline(cin>>ws,s.name);cout<<"Enter number of subjects: ";cin>>n;if(n<=0)return 0;s.marks.resize(n);cout<<"Enter marks (0-100): ";for(double&m:s.marks){cin>>m;if(m<0||m>100){cout<<"Invalid mark.\n";return 0;}}cout<<fixed<<setprecision(2);report(s);}
