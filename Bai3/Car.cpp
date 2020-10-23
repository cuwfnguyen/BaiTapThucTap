#include"DynamicObject.cpp"

class Car : public DynamicObject {
public:
	Car() {}
	Car(int id, string name, float x, float y) : DynamicObject(id, name, x, y) {}
};