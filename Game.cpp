#include "Game.h"

void Game::showGrid() {
	cout << endl;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 20; ++j) {
			cout << grid[i][j];
		}
		cout << endl;
	}
}

void Game::drawGrid(GameObject* p) {	
	grid[p->getY()][p->getX()] = p->getShape();
}

void Game::clean() {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 20; ++j)
			grid[i][j] = '-';
	}
}

void Game::run() {
	Game::welcome();
	GameObject* human = new Human(1, 1, 1);
	GameObject* food = new Food;
	GameObject* monster = new Monster(human);
	drawGrid(human);
	drawGrid(monster);
	drawGrid(food);
	while (true) {
		showGrid();
		human->move();
		monster->move();
		food->move();
		clean();
		drawGrid(human);
		drawGrid(monster);
		drawGrid(food);
		if(human->collide(monster)) {
			cout << "Monster is Winner!!" << endl;
			break;
		}
		if (human->collide(food)) {
			cout << "Human is Winner!!" << endl;
			break;
		}
	}
}