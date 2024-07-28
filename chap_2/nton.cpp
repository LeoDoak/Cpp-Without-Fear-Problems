// compilation: g++ -o nton.exe nton.cpp

#include <iostream>
using namespace std; 

int main(){
	int n1,n2,i;  // initializing variables 
	cout << "Enter in first number: "; 
	cin >> n1; 
	cout << "Enter in second number: "; 
	cin >> n2; 
	i = n1; 
	while(i <= n2){
		cout << i << endl;  
		i++;
	}

	return 0; 
} 