#include <iostream>
#include <Horse.h>

Horse::Horse(int horseId){
	id = horseId;
	pos = o;
}

int Horse::getPos() const{
	return pos;
}

void Horse::setPos(int p){
	pos = 0;
}

int Horse:getId() const{
	return id;
}

void Horse::setId(int p){ 
	id = p;
}

void Horse::advance(){
	int r = rand() % 100 + 1;
	if (r % 2 == 0){
		pos++;
	}
}

void Horse::printLane() const {
	std::cout << id << ": ";
	for (int i = 0; i < pos; i++){
		std::cout << ".";
	}
	std::cout << "H" << std::endl:
}
