#include <iostream>
#include "tictactoe.h"
using namespace std;

void TicTacToe::drawBoard{} {
    system("cls");
    cout << "Game Start!";
    char gameBoard[3][3] = {
        {'1','2','3'},
	    {'4','5','6'},
	    {'7','8','9'},
    };
    
    for(int x=0; x<3; x++) {
        for(int y=0; y<3; y++) {
            cout << gameBoard[x][y] << " ";
        }
        cout << endl;
    }
}


void TicTacToe::makeMove(char player) {

    int move;
    cout << "\n" << "Enter number you want to make your move in: ";
    cin >> move

    if( move = 1) {
		board[0][0] = player;
	}
	else if(move = 2) {
		board[0][1] = player;
	}
	else if(move = 3) {
		board[0][2] = player;
	}
	else if(move = 4) {
		board[1][0] = player;
	}
	else if(move = 5) {
		board[1][1] = player;
	}
	else if(move = 6) {
		board[1][2] = player;
	}
	else if(move = 7) {
		board[2][0] = player;
	}
	else if(move = 8) {
		board[2][1] = player;
	}
	else if(move = 9) {
		board[2][2] = player;
	}
}

void TicTacToe::togglePlayer(char player) {
    if (player == "X")
        player = "O";
    else if(player == "O")
        player = "X";
}

}
