//compilation: g++ -o infinitewhile.exe infinitewhile.cpp

#include <iostream>
using namespace std; 

int main(){
	int i,n; 
	//int x = 1; // this will cause an infinite loop as while loop is true
	//int x = 0; //this will cause the loop to never happe as the while funtion is zero 
	i = 9; 
	n = 10;
	bool x = (i < n); //true
	cout << x << endl; 
	while(x){
		cout << "This is an infinite loop" << endl;
		break; 
	}
	cout << "Did not hit infinite loop" << endl ;
	return 0; 
}