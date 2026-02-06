#include <iostream>
#include <ctime>
#include "Race.h"

int main(){ 
	std::srand(std::time(nullptr));
	Race r;
	r.run();
	return 0;
}
