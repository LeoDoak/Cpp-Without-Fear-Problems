#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

// Excercise 5.4.1 pg 130 

int rand_0toN1(int n); 
void bag_pick();   
int select_next_avaliable(int n); 

char *color[4] = {"red", "blue", "orange", "green"}; 
char *item[2] = {"ball", "cube"}; 

int picks[8]; 
int picks_remaining = 8; 

int main(){
	int n, i; 
	srand(time(NULL)); 

	while(1) { 
		cout << "Enter number of picks (0 to exit): ";
		cin >> n; 
		if (n == 0)
			break; 
		for (i = 1; i <= n; i++) { 
			if (picks_remaining == 0) {
			cout << "Reshuffling. " << endl; 
			picks_remaining = 8; 
				for (int i = 0; i < 8; i++)
					picks[i] = false; 
			}
			bag_pick();
		}
	}
	return 0;
}

void bag_pick() { 
	int c; 
	int i; 
	int n, pick; 

	n = rand_0toN1(picks_remaining--); //mnore of the offset then actaully mapping 
	pick = select_next_avaliable(n); 

	c = pick % 4; // remainder for color 
	i = pick / 4; // either 0 or 1 
	cout << color[c] << " " <<  item[i] << endl; 
}

int select_next_avaliable(int n){
	int i = -1; // used becuase of the increments that we use
	n++; // same ^
	while (n-- > 0){
		i++;
		while (picks[i])
			i++; 
	}
	picks[i] = true; 
	return i;

}

int rand_0toN1(int n){
	return rand() % n; 
}