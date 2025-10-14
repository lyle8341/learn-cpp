#include "starter.h"


#ifdef DEEP_SHALLOW_COPY

class Person {

public:
	Person() {
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}

	Person(int age, int height) {
		this->age = age;
		this->height = new int(height);
	}

	//Ĭ�Ͽ����������ǳ����
	//�Լ�ʵ�ֿ������캯�������ǳ��������������
	Person(const Person& p) {
		cout << "Person�������캯������" << endl;
		this->age = p.age;
		this->height = new int(*p.height);
	}

	~Person() {
		//���������ٵ��������ͷ�
		if (height != NULL) {
			delete height;
			height = NULL;
		}

		cout << "Person������������" << endl;
	}

	int age;
	int* height;

};

//ǳ����������������Ƕ����ڴ��ظ��ͷ�
void test01() {
	Person p1(14, 150);

	cout << "p1������: " << p1.age << " ���: " << *p1.height << endl;

	Person p2(p1);
	cout << "p2������: " << p2.age << " ���: " << *p2.height << endl;
}

int main() {
	test01();
	return 0;
}

#endif // DEEP_SHALLOW_COPY
