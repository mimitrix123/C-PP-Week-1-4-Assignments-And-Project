#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Employee{string name;double basicSalary,allowance,deduction;public:Employee(string n,double b,double a,double d):name(n),basicSalary(b),allowance(a),deduction(d){}double calculateNetSalary()const{return basicSalary+allowance-deduction;}void display()const{cout<<fixed<<setprecision(2)<<"Employee: "<<name<<"\nNet Salary: "<<calculateNetSalary()<<'\n';}};
int main(){Employee e("Mimi",30000,5000,2000);e.display();}
