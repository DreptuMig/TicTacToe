#pragma once

class TicTacToe {
    private:
    char gameBoard[3][3];

    public:
    void drawBoard();
    int checkWin();
    void makeMove(char player);
    void togglePlayer(char player);
    void startGame();
};