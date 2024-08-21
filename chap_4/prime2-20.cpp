#include <iostream>
#include <math.h>
using namespace std; 

int check_prime(int n); 

int main(){
	for (int i = 2; i <= 20; i++){
		if (check_prime(i)){
			cout << i << " is prime" << endl;
		}
		else {
			cout << i << " is not prime" << endl; 
		}
	}

}

int check_prime(int num){
	double sqrt_num = sqrt(static_cast<double>(num)); 
	for (int i = 2; i < sqrt_num; i++){
		if ( num % i == 0){
			return false;
		}
	}
	return true; 
}

