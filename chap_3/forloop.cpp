#include <iostream> 
using namespace std; 

int main(){
	cout << "Printing numbers from 0 -> 10 \n"; 
	for(int i = 0; i <= 10; i++){
		cout << i << " "; 
	}
	cout << "\nPrinting even numbers from 0 -> 100 \n"; 
	for(int i = 0; i <= 100; i++){
		if(i % 2 == 0){
			cout << i << " ";
		}	
	}
	cout << "\nPrinting odd numbers from 0 -> 100\n";
	for(int i = 0; i <= 100; i++){
		if(i % 2 != 0){
			cout << i << " "; 
		}	
	}
	return 0; 
}
