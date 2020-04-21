#ifndef HUMAN_H
#define HUMAN_H

#include "GameObject.h"
#include <iostream>
using namespace std;

class Human : public GameObject {
public:
	Human(int startX, int startY, int distance) :GameObject(startX, startY, distance) {}
	virtual void move() override {
		char inv;
		cout << "W A S D >> ";
		cin >> inv;
		switch (inv) {
			int tmp;
		case 'w':
			tmp = getY();
			this->y = getY() - 1;
			if (y >= 10 || y <= -1) 
				this->y = tmp;
			break;
		case 'a':
			tmp = getX();
			this->x = getX() - 1;
			if (x >= 20 || x <= -1) 
				this->x = tmp;
			break;
		case 's':
			tmp = getY();
			this->y = getY() + 1;
			if (y >= 10 || y <= -1) 
				this->y = tmp;
			break;
		case 'd':
			tmp = getX();
			this->x = getX() + 1;
			if (x >= 20 || x <= -1) 
				this->x = tmp;
			break;
		}
	}
	virtual char getShape() override{
		return 'H';
	}
};

#endif