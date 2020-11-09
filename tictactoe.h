#pragma once

class TicTacToe {
    private:
    char gameBoard[3][3] = {
                           {'1','2','3'},
                           {'4','5','6'},
                           {'7','8','9'},
                           };

    public:
    void drawBoard();
    void checkWin();
};