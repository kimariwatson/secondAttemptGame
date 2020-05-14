#ifndef OBJECT_H
#define OBJECT_H

class Object {
public:
	Object();
	~Object();
	virtual Object* update() = 0;
	virtual void draw() = 0;
private:
	float x;
	float y;
	float angle;
};
#endif // !OBJECT_H

