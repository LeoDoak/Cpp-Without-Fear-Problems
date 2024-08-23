#include <iostream> 
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std; 

int rand_0toN1(int n); 

int main(){
	int n, i; 
	int r; 
	srand(time(NULL)); 

	cout << "Enter number of dice to roll: ";
	cin >> n; 
	for (i = 0; i <= n; i++){
		r = rand_0toN1(6); 
		cout << r << " "; 
	}
	return 0; 
}

int rand_0toN1(int n){
	int rand_int = rand();
	return rand_int % (n+1); //optomized so that takes to n instead of n-1  
}
