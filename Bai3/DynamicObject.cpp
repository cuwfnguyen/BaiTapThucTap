#include "BaseObject.cpp"

class DynamicObject : public BaseObject
{
public:
	DynamicObject() {}
	DynamicObject(int id, string name, float x, float y) :BaseObject(id, name, x, y) {
	}

};