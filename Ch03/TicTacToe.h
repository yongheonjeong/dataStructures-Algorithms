 
#pragma once

extern const int X, O, EMPTY;
extern int board[3][3];
extern int currentPlayer;

void clearBoard();
void putMark(int i, int j);
bool isWin(int mark);
int getWinner();
void printBoard();
