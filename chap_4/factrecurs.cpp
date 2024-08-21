#include <iostream> 
using namespace std; 


int factorial(int n); 

int main(){
	int num; 
	cout << "Please enter in a number to get the factorial sum of it: " ;
       	cin >> num; 
	cout << "The sum of the factorial is " << factorial(num); 
	return 0; 	
}

int factorial(int n){
	if (n == 1){
		return 1;
	}
	else{	
		return n * factorial(n-1); 
	}
}
