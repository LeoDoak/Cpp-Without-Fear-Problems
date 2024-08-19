#include <iostream>
#include <math.h>
using namespace std; 

int main(){
	int n; 
	cout << "Enter in a number to check it it's prime: "; 
	cin >> n;
        
	int sqrt_n = sqrt( (double) n); //optomization -> getting sqrt once 

	int is_prime = true;  //setting bool flag

	cout << "\n"; 	

	for(int i = 2; i <=  sqrt_n; i++){
	       if (n % i == 0){
	       		is_prime = false;
		        break; 	//optomizing -> end once not true
	       }	       
	}

	if(is_prime){
		cout << "The number is prime"; 
	}
	else{
		cout << "The number is not prime"; 
	}
	return 0; 
}
