#pragma once
#include <stdlib.h>
#include <iostream>
#include <time.h>


class brain {
private:
	bool usr[9], com[9]; // see interface for details
	short i; // just for loop counting

public:
	short move(bool, short);
	
};