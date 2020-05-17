#include "Library.h"

Library::Library()
{
	library.emplace("Object",new ObjectFactory())
}

Library::~Library()
{
}
