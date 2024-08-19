#include <iostream>
using namespace std; 

int main(){
	int n1, n2;
        cout << "This is a program that prints a range of numbers \n"; 	
	cout << "Please enter in a first number: "; 
	cin >> n1; 
	cout << "please enter in a second number: ";
	cin >> n2; 
	for(int i = n1; i <= n2; i++){
		cout << i << " " ; 
	}
	return 0; 
}

