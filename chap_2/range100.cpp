#include <iostream> 
using namespace std; 

int main(){
	int num; 
	cout << "Enter in a number"; 
	cin >> num;
       	if(num >= 0 && num <= 100){
		cout << "The number is in range (1 - 100) \n"; 
	}
	else{
		cout << "The number is not in the range(1-100) \n"; 
	}



	return 0; 
}

