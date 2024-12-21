#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define VALUES 5 
using namespace std; 

int rand_0toN1(int n);

int hits[VALUES];

int main(){
	int n; 
	int i; 
	int r; 

	srand(time(NULL)); // set seed for random numbers

	while(1){
		cout << "Enter number of trials run "; 
		cout << "and press ENTER: ";
		cin >> n; 

		if(n == 0){
				break;
			}
		for(i = 1; i <= n; i++){
			r = rand_0toN1(VALUES);
			hits[r]++;
		}
		for(i = 0; i < VALUES; i++){
			cout << i << ": " << hits[i] << " Accuracy: "; 
			cout << static_cast<double>(hits[i]) / (n/VALUES) << endl;
			hits[i] = 0; //resetting the values in the array
		}
	}

	return 0; 
}

int rand_0toN1(int n){
	return rand() % n;
}