#include "starter.h"


#ifdef EXTEND_SAME_NAME_FIELD

class Base {
public:
	Base() {
		age = 99;
	}

	void getName() {
		cout << "�Ŵ�ɽ" << endl;
	}
	int age;
};

class Son :public Base {
public:
	Son() {
		age = 50;
	}

	void getName() {
		cout << "���޼�" << endl;
	}
	int age;
};

int main() {
	Son s;
	//���ʸ���ͬ����Ա
	cout << "����ͬ������ֵ: " << s.Base::age << endl;
	cout << "����ͬ������ֵ: " << s.age << endl;

	//����ͬ������
	s.Base::getName();
	//����ͬ������
	s.getName();

	//TODO ��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ظ���������ͬ����Ա����
	//�����Ҫ���ʣ����� "������"

	return 0;
}


#endif // EXTEND_SAME_NAME_FIELD
