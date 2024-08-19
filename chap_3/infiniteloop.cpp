#include <iostream>
using namespace std; 

int main(){
	for (;;){ 	// infinite loop
		int n; 
		cout << "Enter in a number, 0 will end the program: "; 
		cin >> n; 
		if (n == 0){
			cout << "\n Program ending ..."; 
			break; 
		}
	}
	return 0; 
}
