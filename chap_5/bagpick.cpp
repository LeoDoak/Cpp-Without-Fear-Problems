#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

// Excercise 5.3.3 pg 126 

int rand_0toN1(int n); 
void bag_pick();   

const char *color[4] = {"red", "blue", "orange", "green"}; 
const char *item[2] = {"ball", "cube"}; 

int main(){
	int n, i; 
	srand(time(NULL)); 

	while(1) { 
		cout << "1 to continue, (0 to exit): ";
		cin >> n; 
		if (n == 0)
			break; 
		for (i = 1; i <= 4; i++) 
			bag_pick(); 
	}
	return 0;

}

void bag_pick() { 
	int c; 
	int i; 

	c = rand_0toN1(4); 
	i = rand_0toN1(2);
	cout << color[c] << " " <<  item[i] << endl; 
}

int rand_0toN1(int n){
	return rand() % n; 
}
