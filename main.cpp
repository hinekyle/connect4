//------------------------------------------------------------------------------
// Author:  Kyle Hine
//------------------------------------------------------------------------------

//##############################################################################
// Program: Connect Four Game 
//##############################################################################

using namespace std;
#include <iostream>
#include <vector>

const int MAX = 7;
int WIN = 0;
int TURN = 1;
char PLAYER = 'Y';
char COLUMN;
vector<char> start(MAX, '#');
vector<char> last(MAX, '#');
vector<char> space(MAX, ' ');
vector<char> A(MAX, ' ');
vector<char> B(MAX, ' ');
vector<char> C(MAX, ' ');
vector<char> D(MAX, ' ');
vector<char> E(MAX, ' ');
vector<char> F(MAX, ' ');
vector<char> G(MAX, ' ');

void Menu()
{
	cout << endl << "players (W and Z) alternate turns by\n";
	cout << "picking column letters to place their chips in\n";
	cout << "first connect four chips in a row wins" << endl << endl;

}

void display()
{
	
	cout << endl << "CONNECT FOUR GAME" << endl;
	cout << endl << ' ' << ' ' << 'A' << ' ' << ' ' << 'B' << ' ' << ' ';
        cout << 'C' << ' ' << ' ' << 'D' << ' ' << ' ';
        cout << 'E' << ' ' << ' ' << 'F' << ' ' << ' ';
        cout << 'G' << ' ' << endl;

	A[6] = '#';
	B[6] = '#';
	C[6] = '#';
	D[6] = '#';
	E[6] = '#';
	F[6] = '#';
	G[6] = '#';
	space[6] = '#';

	for(unsigned Q=0; Q < MAX; Q++)
	{
		cout << start[Q];
		cout << space[Q];
		cout << A[Q];
		cout << space[Q] << space[Q];
		cout << B[Q];
	        cout << space[Q] << space[Q];
		cout << C[Q];
		cout << space[Q] << space[Q];
		cout << D[Q];
		cout << space[Q] << space[Q];
		cout << E[Q];
		cout << space[Q] << space[Q];
		cout << F[Q];
		cout << space[Q] << space[Q];
		cout << G[Q];
		cout << space[Q];
		cout << last[Q] << endl;
	}
}

void win_condition()
{
	// VERTICALLY
	if( A[5] != ' ' && A[5] == A[4] && A[3] == A[2] && A[5] == A[2] )
		WIN = 1;
	else if( A[4] != ' ' && A[4] == A[3] && A[2] == A[1] && A[4] == A[1] )
		WIN = 1;
	else if( A[3] != ' ' && A[3] == A[2] && A[1] == A[0] && A[3] == A[0] )
		WIN = 1;
	else if( B[5] != ' ' && B[5] == B[4] && B[3] == B[2] && B[5] == B[2] )
		WIN = 1;
	else if( B[4] != ' ' && B[4] == B[3] && B[2] == B[1] && B[4] == B[1] )
		WIN = 1;
	else if( B[3] != ' ' && B[3] == B[2] && B[1] == B[0] && B[3] == B[0] )
		WIN = 1;
	else if( C[5] != ' ' && C[5] == C[4] && C[3] == C[2] && C[5] == C[2] )
		WIN = 1;
	else if( C[4] != ' ' && C[4] == C[3] && C[2] == C[1] && C[4] == C[1] )
		WIN = 1;
	else if( C[3] != ' ' && C[3] == C[2] && C[1] == C[0] && C[3] == C[0] )
		WIN = 1;
	else if( D[5] != ' ' && D[5] == D[4] && D[3] == D[2] && D[5] == D[2] )
		WIN = 1;
	else if( D[4] != ' ' && D[4] == D[3] && D[2] == D[1] && D[4] == D[1] )
		WIN = 1;
	else if( D[3] != ' ' && D[3] == D[2] && D[1] == D[0] && D[3] == D[0] )
		WIN = 1;
	else if( E[5] != ' ' && E[5] == E[4] && E[3] == E[2] && E[5] == E[2] )
		WIN = 1;
	else if( E[4] != ' ' && E[4] == E[3] && E[2] == E[1] && E[4] == E[1] )
		WIN = 1;
	else if( E[3] != ' ' && E[3] == E[2] && E[1] == E[0] && E[3] == E[0] )
		WIN = 1;
	else if( F[5] != ' ' && F[5] == F[4] && F[3] == F[2] && F[5] == F[2] )
		WIN = 1;
	else if( F[4] != ' ' && F[4] == F[3] && F[2] == F[1] && F[4] == F[1] )
		WIN = 1;
	else if( F[3] != ' ' && F[3] == F[2] && F[1] == F[0] && F[3] == F[0] )
		WIN = 1;
	else if( G[5] != ' ' && G[5] == G[4] && G[3] == G[2] && G[5] == G[2] )
		WIN = 1;
	else if( G[4] != ' ' && G[4] == G[3] && G[2] == G[1] && G[4] == G[1] )
		WIN = 1;
	else if( G[3] != ' ' && G[3] == G[2] && G[1] == G[0] && G[3] == G[0] )
		WIN = 1;

	//HORIZONTALLY
	for(int M = 0; M < 6; M++)
	{
		if( A[M] != ' ' && A[M] == B[M] && C[M] == D[M] && A[M] == D[M] )
			WIN = 1;
		else if( B[M] != ' ' && B[M] == C[M] && D[M] == E[M] && B[M] == E[M] )
			WIN = 1;
		else if( C[M] != ' ' && C[M] == D[M] && E[M] == F[M] && C[M] == F[M] )
			WIN = 1;
		else if( D[M] != ' ' && D[M] == E[M] && F[M] == G[M] && D[M] == G[M] )
			WIN = 1;
	}

	//DIAGONALLY
	if( A[0] != ' ' && A[0] == B[1] && C[2] == D[3] && A[0] == D[3] )
		WIN = 1;
	else if( A[1] != ' ' && A[1] == B[2] && C[3] == D[4] && A[1] == D[4] )
		WIN = 1;
	else if( A[2] != ' ' && A[2] == B[3] && C[4] == D[5] && A[2] == D[5] )
		WIN = 1;
	else if( B[0] != ' ' && B[0] == C[1] && D[2] == E[3] && B[0] == E[3] )
	        WIN = 1;	
	else if( B[1] != ' ' && B[1] == C[2] && D[3] == E[4] && B[1] == E[4] )
		WIN = 1;
	else if( B[2] != ' ' && B[2] == C[3] && D[4] == E[5] && B[2] == E[5] )
		WIN = 1;
	else if( C[0] != ' ' && C[0] == D[1] && E[2] == F[3] && C[0] == F[3] )
	        WIN = 1;	
	else if( C[1] != ' ' && C[1] == D[2] && E[3] == F[4] && C[1] == F[4] )
		WIN = 1;
	else if( C[2] != ' ' && C[2] == D[3] && E[4] == F[5] && C[2] == F[5] )
		WIN = 1;
	else if( D[0] != ' ' && D[0] == E[1] && F[2] == G[3] && D[0] == G[3] )
	        WIN = 1;	
	else if( D[1] != ' ' && D[1] == E[2] && F[3] == G[4] && D[1] == G[4] )
		WIN = 1;
	else if( D[2] != ' ' && D[2] == E[3] && F[4] == G[5] && D[2] == G[5] )
		WIN = 1;
	else if( D[0] != ' ' && D[0] == C[1] && B[2] == A[3] && D[0] == A[3] )
	        WIN = 1;	
	else if( D[1] != ' ' && D[1] == C[2] && B[3] == A[4] && D[1] == A[4] )
		WIN = 1;
	else if( D[2] != ' ' && D[2] == C[3] && B[4] == A[5] && D[2] == A[5] )
		WIN = 1;
	else if( E[0] != ' ' && E[0] == D[1] && C[2] == B[3] && E[0] == B[3] )
	        WIN = 1;	
	else if( E[1] != ' ' && E[1] == D[2] && C[3] == B[4] && E[1] == B[4] )
		WIN = 1;
	else if( E[2] != ' ' && E[2] == D[3] && C[4] == B[5] && E[2] == B[5] )
		WIN = 1;
	else if( F[0] != ' ' && F[0] == E[1] && D[2] == C[3] && F[0] == C[3] )
	        WIN = 1;	
	else if( F[1] != ' ' && F[1] == E[2] && D[3] == C[4] && F[1] == C[4] )
		WIN = 1;
	else if( F[2] != ' ' && F[2] == E[3] && D[4] == C[5] && F[2] == C[5] )
		WIN = 1;
	else if( G[0] != ' ' && G[0] == F[1] && E[2] == D[3] && G[0] == D[3] )
	        WIN = 1;	
	else if( G[1] != ' ' && G[1] == F[2] && E[3] == D[4] && G[1] == D[4] )
		WIN = 1;
	else if( G[2] != ' ' && G[2] == F[3] && E[4] == D[5] && G[2] == D[5] )
		WIN = 1;
}

int main()
{
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
			case 'A':
			case 'a':
				if(A[0] == 'W' || A[0] == 'Z')
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				else
				{
					for(int X=5; X>=0; X--)
					{
						if(A[X] == ' ')
						{
							A[X] = PLAYER;
							break;
						}}}
				display();
				break;
			case 'B':
			case 'b':
				if(B[0] == 'W' || B[0] == 'Z')
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				else
				{
					for(int X=5; X>=0; X--)
					{
						if(B[X] == ' ')
						{
							B[X] = PLAYER;
							break;
						}}}
				display();
				break;
			case 'C':
			case 'c':

				if(C[0] == 'W' || C[0] == 'Z')
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				else
				{
					for(int X=5; X>=0; X--)
					{
						if(C[X] == ' ')
						{
							C[X] = PLAYER;
							break;
						}}}
				display();
				break;
			case 'D':
			case 'd':
				if(D[0] == 'W' || D[0] == 'Z')
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				else
				{
					for(int X=5; X>=0; X--)
					{
						if(D[X] == ' ')
						{
							D[X] = PLAYER;
							break;
						}}}
				display();
				break;
			case 'E':
			case 'e':

				if(E[0] == 'W' || E[0] == 'Z')
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				else
				{
					for(int X=5; X>=0; X--)
					{
						if(E[X] == ' ')
						{
							E[X] = PLAYER;
							break;
						}}}
				display();
				break;
			case 'F':
			case 'f':

				if(F[0] == 'W' || F[0] == 'Z')
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				else
				{
					for(int X=5; X>=0; X--)
					{
						if(F[X] == ' ')
						{
							F[X] = PLAYER;
							break;
						}}}
				display();
				break;
			case 'G':
			case 'g':

				if(G[0] == 'W' || G[0] == 'Z')
				{
					cout << "This column is full, try a different column letter." << endl;
				}
				else
				{
					for(int X=5; X>=0; X--)
					{
						if(G[X] == ' ')
						{
							G[X] = PLAYER;
							break;
						}}}
				display();
				break;
			case 'Q':
			case 'q':
				FIN = 1;
				cout << "thanks for playing!" << endl;
				break;
			default:
				cout << "***Invalid Move Try Again***" << endl;				}
	}
while(!FIN && !WIN);
}

