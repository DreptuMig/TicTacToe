#include <iostream>
#include "tictactoe.h"
using namespace std;

void TicTacToe::drawBoard() {
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
    cout << "\n" << "Player" << player << ", enter number you want to make your move in: ";
    cin >> move;

    if( move == 1) {
		gameBoard[0][0] = player;
	}
	else if(move == 2) {
		gameBoard[0][1] = player;
	}
	else if(move == 3) {
		gameBoard[0][2] = player;
	}
	else if(move == 4) {
		gameBoard[1][0] = player;
	}
	else if(move == 5) {
		gameBoard[1][1] = player;
	}
	else if(move == 6) {
		gameBoard[1][2] = player;
	}
	else if(move == 7) {
		gameBoard[2][0] = player;
	}
	else if(move == 8) {
		gameBoard[2][1] = player;
	}
	else if(move == 9) {
		gameBoard[2][2] = player;
	}
}

void TicTacToe::togglePlayer(char player) {
    if (player == 'X')
        player = 'O';
    else if(player == 'O')
        player = 'X';
}

int TicTacToe::checkWin() {
    if (gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][1] == gameBoard[0][2])

        return 1;
    else if (gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[1][2])

        return 1;
    else if (gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][1] == gameBoard[2][2])

        return 1;
    else if (gameBoard[0][0] == gameBoard[1][0] && gameBoard[1][0] == gameBoard[2][0])

        return 1;
    else if (gameBoard[0][1] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][1])

        return 1;
    else if (gameBoard[0][2] == gameBoard[1][2] && gameBoard[1][2] == gameBoard[2][2])

        return 1;
    else if (gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])

        return 1;
    else if (gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0])

        return 1;
    else if (gameBoard[0][0] != '1' && gameBoard[0][1] != '2' && gameBoard[0][2] != '3' && gameBoard[1][0] != '4' && gameBoard[1][1] != '5' && gameBoard[1][2] != '6' && gameBoard[2][0] != '7' && gameBoard[2][1] != '8' && gameBoard[2][2] != '9')

        return 0;
    else
        return -1;
}

void TicTacToe::startGame() {
    
    int i = checkWin();
    char player = 'X';

    while(i == -1) {
        drawBoard();
        makeMove(player);
        togglePlayer(player);
    }

    if (i == 1) {
        cout << "Player " << player << " Wins!";
    }
    else
        cout << "Its a Tie!";
    
}

