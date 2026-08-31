#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){const string file="practice.txt";ofstream out(file);if(!out)return 1;out<<"C++ File Handling Practice\n";out.close();ifstream in(file);if(!in)return 1;string line;while(getline(in,line))cout<<line<<'\n';}
