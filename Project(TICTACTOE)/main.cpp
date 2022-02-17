#include<iostream>
using namespace std;
#include<array>

int const ROWS = 3;
int const COLS = 3;
bool askCheck = true;
int xTurn = 0;
int row;
int col;
string gameBoard[ROWS][COLS];
void iniGameBoard();
void printGameBoard();
void moveChecker();
void winChecker();
int drawChecker();
bool spaceChecker();
int main() {
	moveChecker();
	return 0;
}
void moveChecker() {
	iniGameBoard();
	while (askCheck) {
		printGameBoard();
		winChecker();
		if (xTurn==0) {
			cout << "Player 1's turn. Enter a row number and a column number separated by a space " << endl;
			cin >> row; cin >> col;
			if (spaceChecker()) {
				gameBoard[row - 1][col - 1] = "O";
				xTurn = 1;
				continue;
			}
			else {
				cout << "Enter a valid row and column number" << endl;
				continue;
			}
		}
		if (xTurn==1) {
			cout << "Player 2's turn. Enter a row and column number separated by a space " << endl;
			cin >> row; cin >> col;
			if (spaceChecker()) {
				gameBoard[row - 1][col - 1] = "X";
				xTurn = 0;
				continue;
			}
			else {
				cout << "Enter a Valid row and column number" << endl;
				continue;
			}
		}
	}
}
void iniGameBoard() {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			gameBoard[i][j] = " ";
		}
	}
}
void printGameBoard() {
	for (int row = 0; row < ROWS; row++) {
		for (int col = 0; col < COLS; col++) {
			cout << gameBoard[row][col];
			if (col < 2) {
				cout << "  | ";
			}
		}
		cout << endl;
		if (row < 2) {
			cout << "------------" << endl;
		}
	}
}
int drawChecker() {
	int countfill = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (gameBoard[i][j] == "X" || gameBoard[i][j] == "O") {
				countfill++;
			}
		}
	}
	if (countfill == 9) {
		cout << "The game is a draw" << endl;
		askCheck = false;
		xTurn = 2;
	}
	return countfill == 9;
}
void winChecker() {
	if ((gameBoard[0][0] == "X" && gameBoard[1][1] == "X" && gameBoard[2][2] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][2] == "X" && gameBoard[1][1] == "X" && gameBoard[2][0] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][0] == "X" && gameBoard[0][1] == "X" && gameBoard[0][2] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[1][0] == "X" && gameBoard[1][1] == "X" && gameBoard[1][2] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[2][0] == "X" && gameBoard[2][1] == "X" && gameBoard[2][2] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][0] == "X" && gameBoard[1][0] == "X" && gameBoard[2][0] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][1] == "X" && gameBoard[1][1] == "X" && gameBoard[2][1] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][2] == "X" && gameBoard[1][2] == "X" && gameBoard[2][2] == "X")) {
		cout << "Player 2 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][0] == "O" && gameBoard[1][1] == "O" && gameBoard[2][2] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][2] == "O" && gameBoard[1][1] == "O" && gameBoard[2][0] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][0] == "O" && gameBoard[0][1] == "O" && gameBoard[0][2] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[1][0] == "O" && gameBoard[1][1] == "O" && gameBoard[1][2] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[2][0] == "O" && gameBoard[2][1] == "O" && gameBoard[2][2] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][0] == "O" && gameBoard[1][0] == "O" && gameBoard[2][0] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][1] == "O" && gameBoard[1][1] == "O" && gameBoard[2][1] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else if ((gameBoard[0][2] == "O" && gameBoard[1][2] == "O" && gameBoard[2][2] == "O")) {
		cout << "Player 1 has won" << endl;
		askCheck = false;
		xTurn = 2;
	}
	else {
		drawChecker();
	}
}
bool spaceChecker() {
	if (gameBoard[row - 1][col - 1] == " ") {
		return true;
	}
	else {
		return false;
	}
}
