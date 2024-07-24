// compilation g++ -o Celsius-to-Fahrenheit Celsius-to-Fahrenheit.cpp

#include <iostream>
using namespace std; 

int main(){
	double ftemp, ctemp; 
	cout << "Enter in the  fahrenhit temperature: "; 
	cin >> ftemp; 
	ctemp = (ftemp - 32) / 1.8;  
	cout << "The celsius temperarure is: " << ctemp << endl; 
	return 0; 
}