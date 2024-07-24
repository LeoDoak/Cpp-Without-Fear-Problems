

#include <iostream>
using namespace std;

//compilation; g++ -o Fahrenheit Fahrenheit.cpp 

int main(){
	double ctemp; 
	cout << "Enter celsius temperature: " ; 
	cin >> ctemp;  
	cout << "The fahrenheit temperature is " << (ctemp * 1.8) + 32 << endl; 
	return 0; 
}