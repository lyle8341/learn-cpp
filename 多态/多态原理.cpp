#include "starter.h"

#ifdef POLYMORPHISM_PRINCIPLE


class Animal {
public:
	void speak() {
		cout << "动物在说话" << endl;
	}
};



class Creature {
public:
	virtual void speak() {
		cout << "生物在说话" << endl;
	}
	/*
		class Creature  size(4):
				+---
		 0      | {vfptr}
				+---

		Creature::$vftable@:
				| &Creature_meta
				|  0
		 0      | &Creature::speak
	*/
};

int main() {

	//空对象
	cout << "只有一个普通函数的类: " << sizeof(Animal) << endl;

	// 多了一个指针
	cout << "只有一个  虚函数的类: " << sizeof(Creature) << endl;

	return 0;
}


#endif // POLYMORPHISM_PRINCIPLE
