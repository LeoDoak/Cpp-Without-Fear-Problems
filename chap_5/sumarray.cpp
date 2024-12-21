#include <iostream>
using namespace std; 


// ask user for 7 numbers to put in array 
// print array and get sum 
int main() {

	int array1[7]; 
	int num;
	for(int i = 0; i < 7; i++){
		cout << "Enter in a number "; 
		cin >> num; 
		array1[i] = num;
	}
	int sum = 0; 
	for(int i = 0; i < 7; i++){  
		cout << array1[i] << " ";
		sum += array1[i];
	}
	cout << "\n" << "Sum: " << sum; 
	  
	return 0; 
}