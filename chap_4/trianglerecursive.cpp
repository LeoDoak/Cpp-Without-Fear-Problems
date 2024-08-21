#include <iostream> 
using namespace std; 

int triangle(int n); 

int main(){
	int num;
	cout << "Enter in a number to compute the triangle value of: "; 
	cin >> num;
       	cout << "The sum of the triangle num is: " << triangle(num) << endl; 	
	return 0;
}

int triangle(int n){
	if (n <= 1){
		return 1; 
	}
	else{
		return n + triangle(n-1); // Recursive elements
	};
}
