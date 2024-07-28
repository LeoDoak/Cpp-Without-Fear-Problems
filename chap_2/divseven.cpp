//compilation: g++ -o divseven.exe divseven.cpp

#include <iostream>
using namespace std; 

int main(){

	int num; 
	cout << "Enter in a number to see if it is divisible by 7: ";
	cin >> num; 
	if(num % 7 ==  0){ 
		cout << "The number is divisible by 7" << endl; 
	}
	else{
		cout << "The number is NOT divisibile by 7" << endl; 
	}
	return 0; 
}