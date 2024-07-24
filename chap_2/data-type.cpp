#include <iostream>
using namespace std;

int main(){
	int n; 
	//n = 3.7; // will cause a warning as the .7 will be lost
	n = static_cast<int>(3.7);
	cout << n; 


	return 0; 

}