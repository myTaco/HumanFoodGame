#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject { //abstract class
protected:
	int distance; //movement distance per one time
	int x, y; //current location
public:
	GameObject() {}
	GameObject(int startX, int startY, int distance) { //set initial position and distance
		this->x = startX;
		this->y = startY;
		this->distance = distance;
	}
	virtual ~GameObject() {} //virtual destructor

	virtual void move() = 0; //move and switch location
	virtual char getShape() = 0; //return instance shape

	int getX() { return x; }
	int getY() { return y; }
	bool collide(GameObject* p) { //if this instance collide with p, return true
		if ((this->x == p->getX()) && (this->y == p->getY()))
			return true;
		else
			return false;
	}
};
#endif