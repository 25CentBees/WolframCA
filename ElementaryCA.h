#include <iostream>

#define BOARD_SIZE 90

class ElementaryCA {

private:

	//Setting rule as rule 30, this can be changed to any binary 0 to 255.
	int rule[8] = { 0,0,0,1,1,1,1,0 };
	//setting binary rules, these should not be changed.
	int binaryRule[8][3] = { {1,1,1},{1,1,0},{1,0,1},{1,0,0},{0,1,1},{0,1,0},{0,0,1},{0,0,0} };

	//There are 2 boards because conflict may arise if there is only 1.
	unsigned int* board;
	unsigned int* board2;

	bool BinaryRule(int left, int middle, int right, int index);
	int Rules(int left, int middle, int right);

public:

	void Game();

	ElementaryCA();
	virtual ~ElementaryCA();
};
