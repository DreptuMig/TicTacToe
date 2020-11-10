#pragma once

class TicTacToe {
    private:
    char gameBoard[3][3];

    public:
    void drawBoard();
    void checkWin();
    void makeMove(char player);
    void togglePlayer(char player);
    void gameStart();
};