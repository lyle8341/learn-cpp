#include "starter.h"

#ifdef LEFT_SHITT_OVERRIDE

class Person {

	//����˽�б�������
	friend ostream& operator<<(ostream& out, Person& p);

public:


	//�������ó�Ա�����������������<<�� ��Ϊ�޷�ʵ�ֵ��������Ҳ࣬�磺cout << p
	/*void operator<<(cout) {

	}*/



	int a;
	int b;
};


//ֻ������ȫ�ֺ����������������
//void operator<<(ostream& cout, Person& p) {
//	cout << "a = " << p.a << " b = " << p.b << endl;
//}

//��������ʽ
ostream& operator<<(ostream& out, Person& p) {
	out << "a = " << p.a << " b = " << p.b << endl;
	return out;
}


int main() {
	Person p;
	p.a = 10;
	p.b = 20;


	//cout << p;

	cout << p << endl;


	return 0;
}


#endif // LEFT_SHITT_OVERRIDE
