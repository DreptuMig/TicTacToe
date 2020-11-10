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


void TicTacToe::makeMove(int move) {
    
}
