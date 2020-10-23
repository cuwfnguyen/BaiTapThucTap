#pragma once
#include"Motorbike.cpp"
#include"Car.cpp"
#include"Tree.cpp"
#include"House.cpp"
#include<list>
#include <iostream>
list<BaseObject*> ListObject;
void CreateObject() {
	
	Motorbike* m1 = new Motorbike(1, "motor1", 3.2, 4.2);
	Car* c1 = new Car(2, "car1", 1.0, 2.2);
	House* h1 = new House(3, "house1", 1.2, 2.2);
	Tree* t1 = new Tree(4, "tree1", 3.0, 4.0);
	ListObject.push_back(m1);
	ListObject.push_back(c1);
	ListObject.push_back(h1);
	ListObject.push_back(m1);
	
}
int main() {
	
	CreateObject();
	for (auto obj : ListObject) {
		obj->GetName();
	}
	for (auto obj : ListObject) {
		obj->Move();
	}
	for (auto obj : ListObject) {
		obj->PrintPosition;
	}
	ListObject.clear();
	return 0;
}