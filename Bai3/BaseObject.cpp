
#pragma once
#include<string>

	using namespace std;
	class BaseObject
	{
	public:
		float x, y;
		int id;
		string name;

		BaseObject() {}
		BaseObject(int id, string name, float x, float y) {
			this->id = id;
			this->name = name;
			this->x = x;
			this->y = y;
		}
		int GetId() {
			return id;
		}
		string GetName() {
			return name;
		}

		void PrintPosition() {
			printf_s("%f \n %f", x, y);
		}
		void Move() {
			x += 1;
		};

	};

