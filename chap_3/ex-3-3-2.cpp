#include <iostream>
using namespace std; 

int main(){
	int n1;
        cout << "This will print numbers from <user input> to 1\n"; 	
	cout << "Please enter in a number: "; 
	cin >> n1;
	for(int i = n1; i >= 1; i--){
	      cout << i << " "; 
	}
	return 0; 	
}

