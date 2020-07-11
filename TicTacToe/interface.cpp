#include "interface.h"


void game::refresh()
{
	for (i = 0; i < 9; i++) {
		mark[i] = ' ';
		usr[i] = 0;
		com[i] = 0;
	}
	success = 1;
	n = 0;
}












void game::grid(bool x, short y)        // x=0 means move of comuputer, otherwise it's users
{
	// Assigning part -1 :

	if (x == 0) {
		com[y - 1] = 1;
	}
	else {
		usr[y - 1] = 1;
	}


	//Assigning part -2 :

	if (n < 9) {

		if (x == 0) { ch = 'O'; }       // Assigning mark (symbol for computer and user
		else { ch = 'X'; }
	

		if (mark[y - 1] == ' ') {      // Placing symbols in empty space
			mark[y - 1] = ch;
			success = 1;
			n++;
		}
		else { 
			std::cout << "You can not move here\n";
			success = 0;
		}

		//console print part:

		std::cout << mark[0] << " | " << mark[1] << " | " << mark[2] << std::endl;       //Interface
		std::cout << mark[3] << " | " << mark[4] << " | " << mark[5] << std::endl;
		std::cout << mark[6] << " | " << mark[7] << " | " << mark[8] << std::endl;
	}
	else {
		std::cout << "Max number of move exceeded!\n";
	}
}










char game::check_result() {

	if (
		com[0] * com[1] * com[2] ||
		com[3] * com[4] * com[5] ||
		com[6] * com[7] * com[8] ||
		com[0] * com[3] * com[6] ||
		com[1] * com[4] * com[7] ||
		com[2] * com[5] * com[8] ||
		com[0] * com[4] * com[8] ||
		com[2] * com[4] * com[6]
		) {return 'c';}
	else if (
		usr[0] * usr[1] * usr[2] ||
		usr[3] * usr[4] * usr[5] ||
		usr[6] * usr[7] * usr[8] ||
		usr[0] * usr[3] * usr[6] ||
		usr[1] * usr[4] * usr[7] ||
		usr[2] * usr[5] * usr[8] ||
		usr[0] * usr[4] * usr[8] ||
		usr[2] * usr[4] * usr[6]
		) {return 'u';}
	else {return 'n';}
}
