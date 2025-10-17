#include "starter.h"


#ifdef VIRTUAL_DESTRUCTOR_PURE_VIRTUAL_DESTRUCTOR

//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ�� �������е�����������Ϊ���������ߴ�������

// �д����������࣬Ҳ���ڳ����࣬�޷�ʵ����

class Animal {
public:

	Animal() {
		cout << "AnimalĬ�Ϲ��캯��������" << endl;
	}

	//������
	/*virtual ~Animal() {
		cout << "Animal����������������" << endl;
	}*/

	//��������
	virtual ~Animal() = 0;

	//���麯��
	virtual void speak() = 0;
};

//TODO �������ʹ������������о��庯��ʵ�֣���Ϊ��������ж������ԵĻ���Ҫ�õ�
Animal::~Animal() {
	cout << "Animal������������������" << endl;
}


class Cat :public Animal {
public:
	Cat(string name) {
		cout << "Cat�вι��������" << endl;
		this->name = new string(name);
	}

	virtual void speak() {
		cout << *name << ":Сè��˵��" << endl;
	}


	~Cat() {
		if (name != NULL) {
			cout << "Cat��������������" << endl;
			delete name;
			name = NULL;
		}
	}

	string* name;
};


int main() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	//TODO ����ָ��������ʱ��������������е�������������������������Գ����ڴ�й©
	//TODO �����ʽ�� �������е�����������Ϊ���������ߴ�������
	delete animal;
	return 0;
}

#endif // VIRTUAL_DESTRUCTOR_PURE_VIRTUAL_DESTRUCTOR
