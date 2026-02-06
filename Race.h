//Instructions for the race
#include "Horse.h"

class Race {
private:
	int winVal;
	Horse horses[5];
public:
	Race();
	void run();
	void printLane();
	void printRace();
};
	
