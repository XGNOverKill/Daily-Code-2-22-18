#include <iostream>
#include <ctime>
using namespace std;
int main(){
	srand(time(NULL));
	char input='a';
	int compScore = 0;
	int HumanScore = 0;
	int comp;

	while (input) {

		cout << "Rock (r), Paper(p) or Scissors(s)" << endl;
		cin >> input;

		comp = rand() % 3; //generates a number between 0-2 (0-rock, 1-scissors, 2-paper)
		if ((input == 'r' && comp == 2) || (input == 'p' && comp == 1 )|| (input == 's' && comp == 0)) {
			cout << "computer wins!" << endl;
			compScore++;
		}
       //do the same thing for the situations where the user wins
		else if ((comp == 2 && input == 'r') || (comp == 1 && input == 'p') || (comp == 0 && input == 's')) {
			cout << "player wins!" << endl;
			HumanScore++;
		}
		//tie means no points
		else if ((comp == 0 && input == 'r') || (comp == 1 && input == 's') || (comp == 2 && input == 'p')) {
			cout << "you both tied!" << endl;
		}
	}
	


}