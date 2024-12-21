#include <iostream>
using namespace std; 

int main() {
	int i; 
	int sum = 0; 
	double scores[8] = {5, 15, 25, 35, 45, 55, 65, 75};
	for(int i = 0; i < 8; i++){
		sum += scores[i]; 
		cout << scores[i] << " " << "\n" ;
	}

	cout << "Sum: " << sum;  
	return 0; 
}