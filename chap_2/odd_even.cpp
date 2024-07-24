// compilation: g++ -o odd_even.exe odd_even.cpp

#include <iostream>
using namespace std;

int main(){
	int n, remainder; 
	cout << "Enter a number and press enter: "; 
	cin >> n; 

	remainder = n  % 2; // if one --> odd, if 0 --> even 

	if (remainder == 0){
		cout << "The number is even" << endl;
	}
	else{
		cout << "The number is odd" << endl; 
	}
	return 0; 
}