#include "starter.h"


#ifdef CLASS_OBJ_AS_CLASS_FIELD

class Phone {
public:

	Phone(string brand) {
		this->brand = brand;
		cout << "�ȹ����ֻ�" << endl;
	}

	string brand;
};

class Person {
public:

	//��ʼ���б�
	//��ʽת�� Phone myPhone = brand;
	Person(string name, string brand) :m_name(name), myPhone(brand) {
		cout << "�ٹ�����" << endl;
	}

	string m_name;
	Phone myPhone;

};

void test01() {
	Person p("lyle", "iphone");

}
//�������������Ϊ�����Ա���ȹ��챾���Ա���ٹ��챾�࣬����˳���෴
int main() {
	test01();
	return 0;
}


#endif // CLASS_OBJ_AS_CLASS_FIELD
