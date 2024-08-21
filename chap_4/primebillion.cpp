#include <iostream> 
#include <math.h>
using namespace std;


int check_prime(int n); 

int main(){
	int count = 1000000000; 
	while (1){
		if(check_prime(count)){
			cout << count << " is the first prime number" << endl;
			break; 	
		}
		else{
			cout << count << " is not a prime number" << endl; 
		}
	count = count + 1; 
	}	
	return 0; 
}

int check_prime(int num){
	double sqrt_num = sqrt(static_cast<double>(num)); 
	for (int i = 2; i <= sqrt_num; i++){
		if (num % i == 0){
			return false; 
		}
	}
	return true; 
}
