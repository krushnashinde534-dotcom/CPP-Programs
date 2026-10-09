#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{    
ofstream file("student.txt");    
file << "C++ Practical Lab";    
file.close();    
ifstream readFile("student.txt");    
string text;    
getline(readFile,text);    
cout << text;    
readFile.close();    
return 0; 
}