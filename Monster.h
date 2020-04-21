#ifndef MONSTER_H
#define MONSTER_H

#include "GameObject.h"
#include <cstdlib>
#include <ctime>

class Monster :public GameObject {
	GameObject* target = nullptr;
public:
	Monster(GameObject* target) {
		srand((unsigned)time(NULL));
		distance = 2;
		x = rand() % 20;
		y = rand() % 10;
		this->target = target;
	}
	virtual void move() override {
		if ((target->getX() > this->getX()) && (target->getY() > this->getY())) {
			int monsterMove = rand() % 2;
			switch (monsterMove) {
				int tmp;
			case 0: 
				tmp = getY();
				this->y = getY() + 2;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 1:
				tmp = getX();
				this->x = getX() + 2;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			
			}
		}
		if ((target->getX() < this->getX()) && (target->getY() > this->getY())) {
			int monsterMove = rand() % 2;
			switch (monsterMove) {
				int tmp;
			case 0: 
				tmp = getY();
				this->y = getY() + 2;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 1:
				tmp = getX();
				this->x = getX() - 2;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			
			}
		}
		if ((target->getX() < this->getX()) && (target->getY() < this->getY())) {
			int monsterMove = rand() % 2;
			switch (monsterMove) {
				int tmp;
			case 0:
				tmp = getY();
				this->y = getY() - 2;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 1:
				tmp = getX();
				this->x = getX() - 2;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			}
		}
		if ((target->getX() > this->getX()) && (target->getY() < this->getY())) {
			int monsterMove = rand() % 2;
			switch (monsterMove) {
				int tmp;
			case 0: 
				tmp = getY();
				this->y = getY() - 2;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 1:
				tmp = getX();
				this->x = getX() + 2;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			}
		}
		else {
			int monsterMove = rand() % 4;
			switch (monsterMove) {
				int tmp;
			case 0:
				tmp = getY();
				this->y = getY() - 2;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 1:
				tmp = getX();
				this->x = getX() - 2;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			case 2:
				tmp = getY();
				this->y = getY() + 2;
				if (y >= 10 || y <= -1) 
					this->y = tmp;
				break;
			case 3:
				tmp = getX();
				this->x = getX() + 2;
				if (x >= 20 || x <= -1) 
					this->x = tmp;
				break;
			}
		}
	}
	virtual char getShape() override {
		return 'M';
	}
};

#endif