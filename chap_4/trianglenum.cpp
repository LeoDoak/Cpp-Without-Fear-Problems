#include <iostream> 
using namespace std; 

int triangle(int n);  
int multtriangle(int n); 

int main(){
	int n; 
	cout << "Please enter in a number and press enter: "; 
	cin >> n; 
	cout << "The function will return: " << triangle(n);
        return 0; 	
}

int triangle(int n){
	int sum = 0; 
	for(int i = 0; i <= n; i++){
		sum += i; 
	}
	return sum; 
}


// this is a function that was typed after for practice
int multtriangle(int n){ 
	int sum = 1; 
	for(int i = 1; i <= n; i++){
		sum *= i; 
	}
	return sum; 
}
