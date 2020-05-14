#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

class ObjectFactory {
public:
	virtual Object* create(tinyxml2::XMLElement* objectElement) = 0;
private:
};
#endif // !OBJECTFACTORY_H

