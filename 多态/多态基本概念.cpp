#include "starter.h"


#ifdef POLYMORPHISM_CONCEPT

//��̬��Ϊ����
	//��̬��̬���������غ�������������ھ�̬��̬�����ú�����
	//��̬��̬����������麯��ʵ������ʱ��̬

//��̬��̬�Ͷ�̬��̬����
	//��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
	//��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ

class Animal {
public:
	//virtual�ؼ��� ʹ������ַ���
	virtual void speak() {
		cout << "������˵��" << endl;
	}
};


class Cat :public Animal {

public:
	void speak() {
		cout << "Сè��˵��" << endl;
	}

};


class Dog :public Animal {
public:
	void speak() {
		cout << "С����˵��" << endl;
	}
};


//�����ִ��è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ���
void doSpeak(Animal& animal) {
	animal.speak();
}


//TODO ��̬��̬��������
	//1. �м̳й�ϵ
	//2. ������д����� "�麯��"����������д����ǰ��virtual���п��ޣ�
//TODO ��̬��̬��ʹ��
	//1. �����ָ������� ָ���������

int main() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
	return 0;
}

#endif // POLYMORPHISM_CONCEPT
