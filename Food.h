#ifndef FOOD_H
#define FOOD_H

#include <ctime>
#include <cstdlib>

class Food :public GameObject {
public:
	Food() {
		srand((unsigned)time(NULL));
		distance = 2;
		x = rand() % 20;
		y = rand() % 10;
	}
	virtual void move() override {
		int foodMove = rand() % 5;
		if (foodMove <= 2);
		else {
			foodMove = rand() % 4;
			switch (foodMove) {
				int tmp;
			case 0:
				tmp = getY();
				this->y = getY() - 1;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 1:
				tmp = getX();
				this->x = getX() - 1;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			case 2:
				tmp = getY();
				this->y = getY() + 1;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 3:
				tmp = getX();
				this->x = getX() + 1;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			}
		}
	}
	virtual char getShape() override {
		return '@';
	}
};

#endif