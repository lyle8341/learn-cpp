#include "starter.h"

#ifdef CONST_CLASS_METHOD

//TODO ������
		//��Ա������ const �����ǳ��������Ϊ "������"
		//�������ڲ������޸ĳ�Ա����
		//��Ա��������ʱ�ӹؼ��� mutable ���ڳ���������Ȼ�����޸�

//������
		//��������ǰ�� const �Ƹö���Ϊ "������"
		//������ֻ�ܵ��ó�����


class Person {

public:

	//thisָ��ı��ʣ�ָ�볣����ָ��ָ���ܸı�
	//�ȼ��� Person* const this;
	void showPerson() {
		//age = 100; �ȼ��� this->age = 100;
		this->age = 100;
		//this = NULL;//����thisָ������ı�
	}

	//������
	//�ȼ��� const Person* const this;
	void getPerson() const {
		//this->age = 90;//����ָ���ֵҲ������ı�
		this->height = 90;
		height = 89;
	}

	int age;
	mutable int height;
};

void test01() {
	//������
	const Person p;
	//p.age = 12; //�������޸�
	p.height = 33;

	p.getPerson();//������ֻ�ܵ��ó���������Ϊ�����������޸����ԣ�������ͨ��Ա�����п����޸�����

}

int main() {
	test01();
	return 0;
}

#endif // CONST_CLASS_METHOD

