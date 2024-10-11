#pragma once
#include "board.h"
class Player{
private:
	int index;
	Board board;
public:

	Player(int index, const Board& board) : board(board) {
		this->index = index;  //
	}
	void makeMove(int row, int col) {
		this->board.setValue(row, col, this->index);
		cout <<"rame" << index<<endl;
	}
};
