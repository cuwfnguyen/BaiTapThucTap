#include"DynamicObject.cpp"
class Motorbike :public DynamicObject {
public:
	Motorbike(){
	}
	Motorbike(int id, string name, float x, float y) :DynamicObject(id, name, x, y) {

	}
};