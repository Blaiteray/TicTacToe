// The main function. All tasks will be accomplished here.

#include "interface.h"


int main()
{
	//toss starts
	char toss;
	srand(time(NULL));
	int toss_result = rand() % 2;
	std::cout << "Welcome! Write 'h' to choose head, or 't' to choose tail: ";
	std::cin >> toss;
	if ((toss == 'h' && toss_result == 1) || (toss == 't' && toss_result == 0)) {
		std::cout << "You won the toss! Press enter to start the game.";
	}
	else {
		std::cout << "You lost the toss.";
	}
	//end toss
	












	/*game game1;
	game1.refresh();
	game1.grid(1, 1);
	game1.grid(0, 8);
	game1.grid(1, 5);
	game1.grid(0, 7);
	game1.grid(1, 9);
	std::cout << game1.success << std::endl;
	std::cout << game1.check_result();*/
	return 0;
}