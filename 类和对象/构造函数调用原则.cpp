#include "starter.h"


#ifdef CONSTRUCT_CALL_PRINCIPLE

//��Ĭ�Ϲ��캯��.png

//����û��������вι��죬c++�����ṩĬ���޲ι��죬���ǻ��ṩ��������
//����û������˿������죬c++�����ṩ�������캯��




class Person {

public:
	string name;
	//int age; //int���ԣ����������Ż����������뿴�Ľ��
};

void test01() {
	Person p;
	p.name = "lyle";
	Person p2(p);
	cout << "p2����: " << p2.name << endl;
}

int main() {
	test01();
	return 0;
}

#endif // CONSTRUCT_CALL_PRINCIPLE