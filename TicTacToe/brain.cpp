
#include "brain.h"

short brain::move(bool x, short y) 
{


	for (i = 0; i <= 8; i++) {            //telling the cpu that all cell is empty
		com[i] = 0;
		usr[i] = 0;
	}


	if (x == 0) {                          //assigning the moves
		com[y - 1] = 1;
	}
	else {
		usr[y - 1] = 1;
	}

	//main logic starts here

	return 0;
}