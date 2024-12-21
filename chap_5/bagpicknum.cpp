#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

// Excercise 5.4.1 pg 130 

int rand_0toN1(int n); 
void bag_pick();   

char *color[4] = {"red", "blue", "orange", "green"}; 
char *item[2] = {"ball", "cube"}; 

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
	int num = rand_0toN1(8);

	c = num % 4; // remainder for color 
	i = num / 4; // either 0 or 1 
	cout << color[c] << " " <<  item[i] << endl; 
}

int rand_0toN1(int n){
	return rand() % n; 
}