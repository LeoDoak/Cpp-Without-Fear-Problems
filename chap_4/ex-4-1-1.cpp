#include <iostream> 
using namespace std; 

int factorial(int num); 

int main(){
	int n;
	cout << "Enter in a number to find the factorial of it: "; 
	cin >> n; 
	cout << "The factorial of " << n << " is " << factorial(n); 
	return 0; 
}

int factorial(int n){
	int sum = 1; 
	for (int i = 1; i <= n; i++){
		sum = i * sum; 
	}
	return sum; 
}
