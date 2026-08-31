#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){const string filename="data.txt";string text;cout<<"Enter text: ";getline(cin>>ws,text);ofstream out(filename);if(!out){cerr<<"Unable to open file for writing.\n";return 1;}out<<text<<'\n';out.close();ifstream in(filename);if(!in){cerr<<"Unable to open file for reading.\n";return 1;}cout<<"Data read from file: ";getline(in,text);cout<<text<<'\n';}
