#pragma once
#include<string>

using namespace std;
class BaseObject
	{
protected:
	struct MyStruct
	{
		float x;
		float y;
	};
	typedef MyStruct position;
    int id;
    string name;
	position pos;
public:
	BaseObject(int id, string name, float x, float y) {
		this->id = id;
		this->name = name;
		this->pos.x = x;
		this->pos.y = y;
	}
	int GetId();
	string GetName();
	void Move(position pos);
	void PrintPosition(position pos);

	}


};

