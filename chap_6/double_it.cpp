#include <iostream>
using namespace std; 

void double_it(int *p); 

int main() {
	
	int a = 5, b = 6; 
	cout << "The value of a before doubling: " << a << endl; 
	cout << "The value of b before doubling: " << b << endl;
	double_it(&a);
	double_it(&b);
	cout << "The value of a after doubling: " << a << endl; 
	cout << "The value of b after doubling: " << b << endl;
	return 0;  
}

void double_it(int *p){
	*p = *p * 2; 
}