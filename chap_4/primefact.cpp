#include <iostream> 
#include <math.h>
using namespace std; 


void get_divisors(int n); 

int main(){
	int i,n;
	while(1){
		cout << "Enter a number and press enter (enter in zero to quit):  "; 
       		cin >> n; 
		if (n == 0){
			cout << "Ending the program ... .. ." << endl; 
			break;
		}
		else{
			cout << "Prime Divisors of " << n << " is: ";
			get_divisors(n); 
		}
	};	
	return 0; 	
}

void get_divisors(int n){
	int i; 
	double sqrt_n = sqrt(static_cast<double>(n));
	for (i = 2; i <= sqrt_n; i++){
		if (n % i == 0){
			cout << i << ","; 
	       		get_divisors(n / i); 
			return; 
		}
	};
	cout <<  n << endl;
}; 
