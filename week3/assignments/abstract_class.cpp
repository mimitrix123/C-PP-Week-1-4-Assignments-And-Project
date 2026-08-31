#include <iostream>
using namespace std;
class Animal{public:virtual void sound()const=0;virtual~Animal()=default;};
class Dog:public Animal{public:void sound()const override{cout<<"Dog says: Woof!\n";}};
class Cat:public Animal{public:void sound()const override{cout<<"Cat says: Meow!\n";}};
int main(){Dog d;Cat c;Animal* a[]={&d,&c};for(const Animal*x:a)x->sound();}
