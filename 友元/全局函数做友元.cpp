#include "starter.h"


#ifdef GLOBAL_FUNCTION_FRIEND

class House {

	//House�ĺ����б�
	//familyȫ�ֺ����� House�ĺ����ѣ����Է���House��˽�г�Ա
	friend void family(House* house);

public:
	House() {
		livingRoom = "����";
		bedroom = "����";
	}


public:
	string livingRoom;

private:
	string bedroom;

};

//ȫ�ֺ���
void family(House* house) {
	cout << "����ȫ�ֺ��� ���ڷ���: " << house->livingRoom << endl;
	cout << "����ȫ�ֺ��� ���ڷ���: " << house->bedroom << endl;
}

void test01() {
	House h;
	family(&h);
}

int main() {
	test01();
	return 0;
}


#endif // GLOBAL_FUNCTION_FRIEND
