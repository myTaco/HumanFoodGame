#ifndef GAME_H
#define GAME_H

#include "Human.h"
#include "Monster.h"
#include "Food.h"
#include <iostream>
using namespace std;

class Game {
	char grid[10][20]; //game grid
	void welcome() {
		cout << "*** Human의 Food 먹기 게임을 시작합니다. ***" << endl;
	}
	void showGrid();
	void drawGrid(GameObject* p);
	void clean();
public:
	Game() {
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 20; ++j)
				grid[i][j] = '-';
		}
	}
	void run();
};

#endif