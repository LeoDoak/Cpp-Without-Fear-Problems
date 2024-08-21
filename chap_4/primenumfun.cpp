#include <iostream> 
#include <math.h>
using namespace std; 

int prime(int num); 

int main(){
	int i; 
	cout << "Enter a number (0 to exit)"; 
	cout << "and press enter: "; 
	cin >> i;
	while(1){
		if(i == 0){
			break; 
		}
		if(prime(i)){
			cout << i << " is prime" << endl; 
		}
		else{
			cout << i << " is not prime" << endl; 
		}
	}
	
	return 0; 
}

int prime(int n){
	double sqrt_n = sqrt(static_cast<double>(n));
	for (int i =2; i <= sqrt_n; i++){
		if (n % i == 0){
			return false; 
		}
	}
	return true; 
}


