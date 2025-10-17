#include "starter.h"

#ifdef POLYMORPHISM_PRINCIPLE


class Animal {
public:
	void speak() {
		cout << "������˵��" << endl;
	}
};



class Creature {
public:
	virtual void speak() {
		cout << "������˵��" << endl;
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

	//�ն���
	cout << "ֻ��һ����ͨ��������: " << sizeof(Animal) << endl;

	// ����һ��ָ��
	cout << "ֻ��һ��  �麯������: " << sizeof(Creature) << endl;

	return 0;
}


#endif // POLYMORPHISM_PRINCIPLE
