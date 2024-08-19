#include <iostream> 
using namespace std; 

void print_out(int num); 

int main(){
	int n; 
	cout << "Please enter in an number: "; 
	cin >> n; 
	cout << "Will print from 0 -> n\n";
       	print_out(n); 
}

void print_out(int n){
	for (int i = 0; i <= n; i++){
		cout << i << " "; 
	}
}

