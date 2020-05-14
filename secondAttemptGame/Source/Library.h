#ifndef LIBRARY_H
#define LIBRARY_H

#include<map>
#include<string>
#include"ObjectFactory.h"

using namespace std;
class Library {
public:
	Library();
	~Library();

private:
	map<string, ObjectFactory*>library;
};
#endif // !LIBRARY_H
