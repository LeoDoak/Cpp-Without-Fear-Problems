//compilation: g++ -o whileloop.exe whileloop.cpp 
#include <iostream>
using namespace std; 

int main(){
	int num;
	int i = 1;  
	cout << "Plese enter a number: "; 
	cin >> num; 
	while(i <= num){  //ascending order
		cout << i << endl;
		i++;  
	}
	i = num; 
	while(i >= 1){  //reverse order
		cout << i << endl;
		i--;
	}
	return 0; 
}