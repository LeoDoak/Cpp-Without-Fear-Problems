#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n); 
void draw_a_card();  
int select_next_avaliable(int n);  

char *suits[4] = {"hearts", "diamonds", "spades", "clubs"}; 
char *ranks[13] = {"ace", "two", "three","four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"}; 

int card_drawn[52]; 
int cards_remaining = 52; 

int main(){
	int n, i; 
	srand(time(NULL)); 

	while(1) { 
		cout << "Enter number of cards to draw (0 to exit): ";
		cin >> n; 
		if (n == 0)
			break; 
		for (i = 1; i <= n; i++) { 
			if (cards_remaining == 0) {
			cout << "Reshuffling. " << endl; 
			cards_remaining = 52; 
				for (int i = 0; i < 52; i++)
					card_drawn[i] = false; 
			}
			draw_a_card();
		}
	}
	return 0;
}

void draw_a_card() { 
	int r; 
	int s; 
	int n, card; 

	n = rand_0toN1(cards_remaining--); //mnore of the offset then actaully mapping 
	card = select_next_avaliable(n); 

	r = card % 13; // remainder to get the ranks
	s = card / 13; // numero operator to get the suit
	cout << "Card " << cards_remaining << " "<< ranks[r] << " of " << suits[s] << endl; 
}

int select_next_avaliable(int n){
	int i = -1; 
	n++; 
	while (n-- > 0){
		i++;
		while (card_drawn[i])
			i++; 
	}
	card_drawn[i] = true; 
	return i;

}

int rand_0toN1(int n){
	return rand() % n; 
}