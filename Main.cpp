#pragma once
#include"BaseObject.cpp"
#include<list>
#include <iostream>

class DynamicObject : public BaseObject
{
public:
	DynamicObject() {}
	//~DynamicObject() {}
	DynamicObject(int id, string name, float x, float y) :BaseObject(id, name, x, y) {
	}

};
class Car : public DynamicObject {
public:
	Car() {}
	//~Car() {}
	Car(int id, string name, float x, float y) : DynamicObject(id, name, x, y) {}
};
class Motorbike :public DynamicObject {
public:
	Motorbike() {}
	//~Motorbike() {
	//}
	Motorbike(int id, string name, float x, float y) :DynamicObject(id, name, x, y) {

	}
};
class StaticObject : public BaseObject {
public:
	StaticObject() {}
	//~StaticObject() {}
	StaticObject(int id, string name, float x, float y) :BaseObject(id, name, x, y) {}

};
class Tree :public StaticObject {
public:
	Tree() {}
	//~Tree() {}
	Tree(int id, string name, float x, float y) :StaticObject(id, name, x, y) {}
};
class House :public StaticObject {
public:
	House() {}
	//~House() {}
	House(int id, string name, float x, float y) : StaticObject(id, name, x, y) {}
};

list<BaseObject*> ListObject;

void CreateObject() {

	Motorbike* m1 = new Motorbike(01, "motor1", 3.2f, 4.2f);
	Car* c1 = new Car(02, "car1", 1.0f, 2.2f);
	House* h1 = new House(11, "house1", 1.2f, 2.2f);
	Tree* t1 = new Tree(12, "tree1", 3.4f, 4.0f);
	ListObject.push_back(m1);
	ListObject.push_back(c1);
	ListObject.push_back(h1);
	ListObject.push_back(t1);
}
int main() {
	
	CreateObject();
	for (auto obj : ListObject) {
		obj->GetName();
	}
	for (auto obj : ListObject) {
		obj->PrintPosition();
	}
	for (auto obj : ListObject) {
		obj->Move();
	}
	printf_s("After moving: \n");
	for (auto obj : ListObject) {
		obj->PrintPosition();
	}
	
	ListObject.clear();
	return 0;
}