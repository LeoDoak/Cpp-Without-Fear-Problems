using namespace std; 
#include <iostream> 

int main(){
	int age; 
	cout << "Please enter in your age "; 
	cin >> age; 
	if( age > 12 && age < 20){
		cout << "The subject is a teenager"; 
	}
	else{
		cout << "The subject is not a teenager"; 
	}
	cout << "\n"; 
	// precedence example
	int x = 5; 
	int y = 5; 
	int a = 5; 
	int b = 5; 
	if (x + 2 > y && a == b){
		cout <<"the data passes the test"; 
	}
	else{
		cout <<"The data does not pass the test";
	}
	cout << "\n"; 
	// more examples:
	int n = 1; // non-zero 
	if (n && b > 2){
		cout << "n is nonzero and b is greater than 2"; 
	}
       // Another Example: 
       if (1.05 && 33){
		cout << "Vales are non-zero";
	}
       return 0; 
}



