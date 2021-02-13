#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;
//Hazel: I played the game a few times  it think the "?" symbol is fine but the grid needs some ajustments so that i appears bigger.
//Hazel: error message  needs to appear so that players do not click the same spot.
static string line1 = "???";
static string line2 = "???";
static string line3 = "???";
static string player1Indicator = "X";
static string player2Indicator = "O";
void makeMovePlayer1(int spot)
{
	if (spot == 1)
	{
		line1.replace(0, 1, player1Indicator);
	}
	if (spot == 2)
	{
		line1.replace(1, 1, player1Indicator);
	}
	if (spot == 3)
	{
		line1.replace(2, 1, player1Indicator);
	}
	if (spot == 4)
	{
		line2.replace(0, 1, player1Indicator);
	}
	if (spot == 5)
	{
		line2.replace(1, 1, player1Indicator);
	}
	if (spot == 6)
	{
		line2.replace(2, 1, player1Indicator);
	}
	if (spot == 7)
	{
		line3.replace(0, 1, player1Indicator);
	}
	if (spot == 8)
	{
		line3.replace(1, 1, player1Indicator);
	}
	if (spot == 9)
	{
		line3.replace(2, 1, player1Indicator);
	}
}

void makeMovePlayer2(int spot)
{
	if (spot == 1)
	{
		line1.replace(0, 1, player2Indicator);
	}
	if (spot == 2)
	{
		line1.replace(1, 1, player2Indicator);
	}
	if (spot == 3)
	{
		line1.replace(2, 1, player2Indicator);
	}
	if (spot == 4)
	{
		line2.replace(0, 1, player2Indicator);
	}
	if (spot == 5)
	{
		line2.replace(1, 1, player2Indicator);
	}
	if (spot == 6)
	{
		line2.replace(2, 1, player2Indicator);
	}
	if (spot == 7)
	{
		line3.replace(0, 1, player2Indicator);
	}
	if (spot == 8)
	{
		line3.replace(1, 1, player2Indicator);
	}
	if (spot == 9)
	{
		line3.replace(2, 1, player2Indicator);
	}
}

bool checkWinPlayer1()
{
	if (line1 == "XXX")
	{
		return true;
	}
	if (line2 == "XXX")
	{
		return true;
	}
	if (line3 == "XXX")
	{
		return true;
	}
	if (line1.substr(0,1) == "X")
	{
		if (line2.substr(0, 1) == "X")
		{
			if (line3.substr(0, 1) == "X")
			{
				return true;
			}
		}
	}
	if (line1.substr(1, 1) == "X")
	{
		if (line2.substr(1, 1) == "X")
		{
			if (line3.substr(1, 1) == "X")
			{
				return true;
			}
		}
	}
	if (line1.substr(2, 1) == "X")
	{
		if (line2.substr(2, 1) == "X")
		{
			if (line3.substr(2, 1) == "X")
			{
				return true;
			}
		}
	}
	if (line1.substr(0, 1) == "X")
	{
		if (line2.substr(1, 1) == "X")
		{
			if (line3.substr(2, 1) == "X")
			{
				return true;
			}
		}
	}
	if (line1.substr(2, 1) == "X")
	{
		if (line2.substr(1, 1) == "X")
		{
			if (line3.substr(0, 1) == "X")
			{
				return true;
			}
		}
	}
}

bool checkWinPlayer2()
{
	if (line1 == "OOO")
	{
		return true;
	}
	if (line2 == "OOO")
	{
		return true;
	}
	if (line3 == "OOO")
	{
		return true;
	}
	if (line1.substr(0, 1) == "O")
	{
		if (line2.substr(0, 1) == "O")
		{
			if (line3.substr(0, 1) == "O")
			{
				return true;
			}
		}
	}
	if (line1.substr(1, 1) == "O")
	{
		if (line2.substr(1, 1) == "O")
		{
			if (line3.substr(1, 1) == "O")
			{
				return true;
			}
		}
	}
	if (line1.substr(2, 1) == "O")
	{
		if (line2.substr(2, 1) == "O")
		{
			if (line3.substr(2, 1) == "O")
			{
				return true;
			}
		}
	}
	if (line1.substr(0, 1) == "O")
	{
		if (line2.substr(1, 1) == "O")
		{
			if (line3.substr(2, 1) == "O")
			{
				return true;
			}
		}
	}
	if (line1.substr(2, 1) == "O")
	{
		if (line2.substr(1, 1) == "O")
		{
			if (line3.substr(0, 1) == "O")
			{
				return true;
			}
		}
	}
}


int main()
{
	int firstPlay, turnCount = 0, moveInput;
	srand(time(0));
	firstPlay = (rand() % 2) + 1;
	if (firstPlay == 1)
	{
		cout << "Player 1 Goes First" << endl;
		while (turnCount != 4)
		{
			cout << "Player 1 (X), Select a Number 1-9 To Select Your Move. (Top Left = 1 and Bottom Right = 9)" << endl;
			cout << line1 << endl << line2 << endl << line3 << endl;
			cin >> moveInput;
			makeMovePlayer1(moveInput);
			if (checkWinPlayer1())
			{
				system("CLS");
				cout << line1 << endl << line2 << endl << line3 << endl;
				cout << "Player 1 Wins!" << endl;
				system("pause");
				return 0;
			}
			turnCount++;
			cout << endl;
			cout << line1 << endl << line2 << endl << line3 << endl;
			cout << "Player 2 (O), Select a Number 1-9 To Select Your Move. (Top Left = 1 and Bottom Right = 9)" << endl;
			cin >> moveInput;
			makeMovePlayer2(moveInput);
			if (checkWinPlayer2())
			{
				system("CLS");
				cout << line1 << endl << line2 << endl << line3 << endl;
				cout << "Player 2 Wins!" << endl;
				system("pause");
				return 0;
			}
			cout << endl;
		}
		cout << "Player 1 (X), Select a Number 1-9 To Select Your Move. (Top Left = 1 and Bottom Right = 9)" << endl;
		cout << line1 << endl << line2 << endl << line3 << endl;
		cin >> moveInput;
		makeMovePlayer1(moveInput);
		if (checkWinPlayer1())
		{
			system("CLS");
			cout << line1 << endl << line2 << endl << line3 << endl;
			cout << "Player 1 Wins!" << endl;
			system("pause");
			return 0;
		}
		system("CLS");
		cout << line1 << endl << line2 << endl << line3 << endl;
		cout << "The Game Ends in a Draw!" << endl;
	}
	if (firstPlay == 2)
	{
		cout << "Player 2 Goes First" << endl;
		while (turnCount != 4)
		{
			cout << "Player 2 (O), Select a Number 1-9 To Select Your Move. (Top Left = 1 and Bottom Right = 9)" << endl;
			cout << line1 << endl << line2 << endl << line3 << endl;
			cin >> moveInput;
			makeMovePlayer2(moveInput);
			if (checkWinPlayer2())
			{
				system("CLS");
				cout << line1 << endl << line2 << endl << line3 << endl;
				cout << "Player 2 Wins!" << endl;
				system("pause");
				return 0;
			}
			turnCount++;
			cout << endl;
			cout << line1 << endl << line2 << endl << line3 << endl;
			cout << "Player 1 (X), Select a Number 1-9 To Select Your Move. (Top Left = 1 and Bottom Right = 9)" << endl;
			cin >> moveInput;
			makeMovePlayer1(moveInput);
			if (checkWinPlayer1())
			{
				system("CLS");
				cout << line1 << endl << line2 << endl << line3 << endl;
				cout << "Player 1 Wins!" << endl;
				system("pause");
				return 0;
			}
			cout << endl;
		}
		cout << "Player 2 (X), Select a Number 1-9 To Select Your Move. (Top Left = 1 and Bottom Right = 9)" << endl;
		cout << line1 << endl << line2 << endl << line3 << endl;
		cin >> moveInput;
		makeMovePlayer2(moveInput);
		if (checkWinPlayer2())
		{
			system("CLS");
			cout << line1 << endl << line2 << endl << line3 << endl;
			cout << "Player 2 Wins!" << endl;
			system("pause");
			return 0;
		}
		system("CLS");
		cout << line1 << endl << line2 << endl << line3 << endl;
		cout << "The Game Ends in a Draw!" << endl;
	}
	system("pause");
	return 0;
}