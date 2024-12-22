#include <iostream>
using namespace std; 

void triple_it(int *p); 

int main() {
	
	int n = 15; 
	cout << "The value of a before tripling: " << n << endl; 
	triple_it(&n); // assign pointer p to point to integer n 
	cout << "The value of b after tripling: " << n << endl;
	return 0;  
}

void triple_it(int *p){
	*p = *p * 3; 
}