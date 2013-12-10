//------------------------------------------------------------------------------
// Program: Connect Four Game
// Author:  Kyle Hine
//------------------------------------------------------------------------------

using namespace std;
#include <iostream>
#include <vector>

const int MAX = 7;
int WIN = 0;
int TURN = 1;
char PLAYER = 'Y';
int COLUMN;
vector<char> space(MAX, ' ');
vector< vector<char> > board(7, vector<char>(9, ' '));

void Menu()
{
	cout << endl << "players (W and Z) alternate turns by\n";
	cout << "picking column letters to place their chips in\n";
	cout << "first connect four chips in a row wins" << endl << endl;

}

void display()
{
	cout << endl << "CONNECT FOUR GAME" << endl;
	cout << endl << ' ' << ' ' << '1' << ' ' << ' ' << '2' << ' ' << ' ';
        cout << '3' << ' ' << ' ' << '4' << ' ' << ' ';
        cout << '5' << ' ' << ' ' << '6' << ' ' << ' ';
        cout << '7' << ' ' << endl;

	for (int i=0; i<7; i++) {
		board[i][0] = '#'; // left side
		board[i][8] = '#'; // right side
		for (int j=0; j<9; j++) {
			board[6][j] = '#'; // bottom row
			if (j==0 || j==7) {
				cout << board[i][j];
				cout << space[i];
			}
			else if (j==8) {
				cout << board[i][j];
			}
			else {
				cout << board[i][j];
				cout << space[i];
				cout << space[i];
			}
		}
		cout << endl;
	}
}

int insertChip(int column, char player) {
	cout << column << endl;
	for (int i=6; i>0; i--) {
		cout << i << endl;
		if (board[i][column] == ' ') {
			board[i][column] = player;
			return 0;
		}
	}
	return 1;
}

void win_condition()
{
	// VERTICALLY

	//HORIZONTALLY

	//DIAGONALLY
}

int main()
{
	space[6] = '#';
	int FIN = 0;
	display();
	Menu();
       	do
	{
		win_condition();
		if(WIN == 1)
		{
			cout << "WINNER GAME OVER!" << endl;
			break;
		}
		TURN++;
		if(TURN%2 == 0)
		{
			PLAYER = 'W';
		}
		else
		{
			PLAYER = 'Z';
		}
		cout << "Player  " << PLAYER << "  enter a column number: ";
		cin >> COLUMN;

		switch(COLUMN)
		{
			case 1:
				if(insertChip(COLUMN,PLAYER) == 1)
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				display();
				break;
			case 2:
				if(insertChip(COLUMN,PLAYER) == 1)
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				display();
				break;
			case 3:
				if(insertChip(COLUMN,PLAYER) == 1)
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				display();
				break;
			case 4:
				if(insertChip(COLUMN,PLAYER) == 1)
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				display();
				break;
			case 5:
				if(insertChip(COLUMN,PLAYER) == 1)
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				display();
				break;
			case 6:
				if(insertChip(COLUMN,PLAYER) == 1)
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				display();
				break;
			case 7:

				if(insertChip(COLUMN,PLAYER) == 1)
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				break;
			case 0:
				FIN = 1;
				cout << "thanks for playing!" << endl;
				break;
			default:
				cout << "***Invalid Move Try Again***" << endl;				}
	}
while(!FIN && !WIN);
}

