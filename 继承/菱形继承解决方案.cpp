#include "starter.h"

#ifdef DIAMON_EXTEND_RESOLVE

class Animal {
public:
	int age;
};

//TODO ������̳У�������μ̳е�����
//�̳�֮ǰ���Ϲؼ��� virtual �����̳�
//Animal���Ϊ �����
class Sheep : virtual public Animal {
public:

};


class Camel : virtual public Animal {
public:

};

class Alpaca :public Sheep, public Camel {
public:

};


void test01() {
	Alpaca a;

	a.Sheep::age = 10;
	a.Camel::age = 20;


	cout << "�������: " << a.Sheep::age << endl;
	cout << "�յ�����: " << a.Camel::age << endl;
	cout << "��������: " << a.age << endl;


	/*
	class Alpaca    size(12):
			+---
	 0      | +--- (base class Sheep)
	 0      | | {vbptr}
			| +---
	 4      | +--- (base class Camel)
	 4      | | {vbptr}
			| +---
			+---
			+--- (virtual base Animal)
	 8      | age
			+---

	Alpaca::$vbtable@Sheep@:
	 0      | 0
	 1      | 8 (Alpacad(Sheep+0)Animal)

	Alpaca::$vbtable@Camel@:
	 0      | 0
	 1      | 4 (Alpacad(Camel+0)Animal)
	vbi:       class  offset o.vbptr  o.vbte fVtorDisp
			  Animal       8       0       4 0

	*/

}

int main() {
	test01();

	return 0;
}

#endif // DIAMON_EXTEND_RESOLVE