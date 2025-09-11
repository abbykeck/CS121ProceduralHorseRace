#include <iostream>
#include <random>

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);

const int TRACK_LENGTH = 15;
const int ARRAY_LENGTH = 5;

int main() {
	int horseArray[ARRAY_LENGTH] = {0, 0, 0, 0, 0};
	bool winnerExists = false;
	while (winnerExists == false) {
		for (int i = 0; i < ARRAY_LENGTH; i++) {
			advance(i, horseArray);
			printLane(i, horseArray);
			winnerExists = isWinner(i, horseArray);
		} // end for
		std::cout << "Press enter for another turn" << std::endl;
		std::cin.ignore();
	} // end while
	return 0;
} // end main

void advance(int horseNum, int* horses) {
	int coin = -1;
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	coin = dist(rd);
	horses[horseNum] += coin;
} // end advance

void printLane(int horseNum, int* horses) {
	for (int i = 0; i < TRACK_LENGTH; i++) {
		if (i == horses[horseNum]) {
			std::cout << horseNum;
		} else {
			std::cout << ".";
		} // end if
	} // end for
	std::cout << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horses) {
	if (horses[horseNum] >= TRACK_LENGTH) {
		std::cout << "Horse " << horseNum << " WINS!!!" << std::endl;
		return true;
	} else {
		return false;
	} // end if
} // end isWinner
