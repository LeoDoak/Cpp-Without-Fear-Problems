#include <iostream> 
#include <math.h>
using namespace std; 

// Prime number: whole number greater than 1, that can't be divided by any whole number other than itself

int main(){

	// initializing variables
	int n;  
	
	// Assume the number is prime 
	int is_prime = true; 

	// Get user input
	cout << "Enter a number and press Enter: ";
	cin >> n; 

	// loop through to get 2 -> sqrt(n)
	int i = 2;
	double sqrt_n = sqrt(static_cast<double>(n)); // more optomized to find sqrt once	
	while (i <=  sqrt_n){
		if (n % i == 0){
			is_prime = false;
			break; // optomizing function to break
		}	
		i++;
	}
	
	// print results
	if (is_prime){
		cout << "The number is prime"; 
	}
	else {
		cout << "The number is not prime"; 
	}

	return 0; 
}

