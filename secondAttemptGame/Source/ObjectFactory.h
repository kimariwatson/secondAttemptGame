#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

#include"../Third Party/tinyxml2-master/tinyxml2.h"
#include"Object.h"

class ObjectFactory {
public:
	ObjectFactory();
	Object* create(tinyxml2::XMLElement* objectElement) = 0;
private:
};
#endif // !OBJECTFACTORY_H

