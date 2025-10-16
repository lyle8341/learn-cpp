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
	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ������������
	a.Sheep::age = 10;
	a.Camel::age = 20;
	//�����������ֻ��Ҫһ�ݼ��ɣ����μ̳е������������ݣ���Դ�˷�

	cout << "�������: " << a.Sheep::age << endl;
	cout << "�յ�����: " << a.Camel::age << endl;

	//TODO cl /d1 reportSingleClassLayoutAlpaca ���μ̳�.cpp

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
