#include "starter.h"

#ifdef DIAMOND_EXTEND

class Animal {
public:
	int age;
};

class Sheep :public Animal {
public:

};


class Camel :public Animal {
public:

};

class Alpaca :public Sheep, public Camel {
public:

};

void test01() {
	Alpaca a;
	//当菱形继承，两个父类拥有相同数据，需要加作用域区分
	a.Sheep::age = 10;
	a.Camel::age = 20;
	//但是这份数据只需要一份即可，菱形继承导致有两份数据，资源浪费

	cout << "羊的年龄: " << a.Sheep::age << endl;
	cout << "驼的年龄: " << a.Camel::age << endl;

	//TODO cl /d1 reportSingleClassLayoutAlpaca 菱形继承.cpp

	/*
		class Alpaca    size(8) :
		+-- -
		0 | +-- - (base class Sheep)
		0      | | +-- - (base class Animal)
		0      | | | age
		| | +-- -
		| +-- -
		4 | +-- - (base class Camel)
		4      | | +-- - (base class Animal)
		4      | | | age
		| | +-- -
		| +-- -
		+-- -

	*/
}

int main() {
	test01();

	return 0;
}


#endif // DIAMOND_EXTEND
