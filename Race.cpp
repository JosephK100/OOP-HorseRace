#include "Race.h"
#include <iostream>

Race::Race(){ 
	winVal = 15;
	for (int i = 0; i < 5; i++ ){
		horses[1] = Horse(i + 1);
	}
}

void Race::run(){ 
	bool keepGoing = true;
	while (keepGoing){
		std::cout << "Press Enter to continue";
		std::cin.get();
		for(int i = 0; i < 5; i++){
			horses[i].advance();
		}
		printRace();
		for (int i = 0; i < 5; i++){
			if (horses[i].getPos() >= winVal){
				std::cout << "Horse " << horses [i].getId() << "wins!\n";
				keepGoing = false;
			}
		}
	}
}

void Race::printRace(){
	for (int  i = 0; i < 5; i++){ 
		horses[i].printLane();
	}
}
