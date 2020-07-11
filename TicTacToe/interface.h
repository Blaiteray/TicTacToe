#pragma once
#include <iostream>

/*
	Class: game
	Usable functons:
		1. refresh()          : It refreshes a game data
		2. success               : Returns 1 or 0 based on whether the move was successful or not
		3. grid(bool, short)  : bool takes whose move, 0 means computer(O), 1 means user(X). Then shows the grid-
									1 | 2 | 3
									4 | 5 | 6
									7 | 8 | 9
								Here 1,2,3... (short) position.
*/


class game {
private:
	char ch, mark[9]; // mark[] stores the past moves
	short i, n; // n= number of move
	bool usr[9], com[9];     // user[] and computer[] stores moves of user and compter
public:
	bool success; // move=1 if the move was successful, else it is 0
	void grid(bool, short); // fist one to define who's move is it, second for where to place. it can be called at most 9 times
	                        // the value of bool=0 means computer (O), 1 means user (X).
	void refresh();
	char check_result();
};