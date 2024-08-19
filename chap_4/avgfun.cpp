#include <iostream> 
using namespace std; 

double avg(double a, double b); // function declaration / prototype 

int main(){
	double a, b; 
	cout << "Input in first number: "; 
	cin >> a; 
	cout << "Input in second number: "; 
	cin >> b; 
	cout << "The average of "<< a << " and " << b << " is " << avg(a, b); // function call 

	return 0; 
}

double avg(double a, double b){ // function definition 
	double v = (a + b) / 2; 
	return v; 
}


