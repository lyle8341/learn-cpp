#include "starter.h"

#ifdef THIS_POINTER

//TODO thisָ��ı��ʣ� ָ�볣��
class Person {
public:
	//1.this���Խ��������ͻ
	Person(int age) {
		this->age = age;
	}


	int age;

	//TODO ���ر��壬���������÷�ʽ����
	//TODO ���ر��壬���������÷�ʽ����
	//TODO ���ر��壬���������÷�ʽ����
	Person& personAddAge(Person& p) {
		this->age += p.age;
		//thisָ��p2��ָ�룬��*this ָ��ľ���p2���������
		return *this;
	}

};


void test01() {
	Person p(20);
	Person p2(30);

	//p2.personAddAge(p);
	//cout << "p2������: " << p2.age << endl;

	p2.personAddAge(p).personAddAge(p).personAddAge(p);
	cout << "p2������: " << p2.age << endl;
}

int main() {
	test01();
	return 0;
}
#endif // THIS_POINTER
