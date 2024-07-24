#include <iostream>
using namespace std; 

// input value and find the cube of it 
// compilation: g++ -o cube cube.cpp

int main(){
	double num, cube_num;
	cout << "Enter in a number: ";
	cin >> num;
	cube_num = num * num * num;  
	cout << "The cube of " << num << " is " << cube_num << endl; 
	return 0; 
}