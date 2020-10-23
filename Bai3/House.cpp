#include"StaticObject.cpp"

class House :public StaticObject {
	public:
		House() {}
		House(int id, string name, float x, float y): StaticObject(id,name,x,y) {}
};