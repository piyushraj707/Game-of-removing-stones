#include <iostream>
using namespace std;

int main() {
	char name1[]="             ", name2[]="              ";
	char* names[2] = { name1,name2 };
	cout << "Input first player's name: "; cin >> name1;
	cout << "Input first player's name: "; cin >> name2;
	
	int stones = 15;
	bool player_number = 0;

	cout << endl << endl << ".............Let us start the game now...................." << endl;
	while (true) {
		int temp = 0;
		cout << names[player_number] << "'s turn." << endl
			<< "stones left: " << stones << endl
			<< "Choose the number of stones (1, 2 or 3) to be removed: "; cin >> temp;
		if (temp > stones || temp < 1 || temp>3) {
			cout << "Invalid Move. (Are you dumb!?). Try again." << endl;
			continue;
		}
		stones -= temp;
		cout << endl << "............................" << endl << endl << endl;
		if (stones == 0)
			break;
		player_number = !player_number;
	}


	cout << names[player_number] << " wins!!!!! Congo!!!!" << endl;
	return 0;
}