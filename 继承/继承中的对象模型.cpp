#include "starter.h"

#ifdef EXTEND_OBJ_MODEL

class Base {
public:
	int a;
protected:
	int b;
private:
	int c;
};


//TODO ���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//TODO ������˽�г�Ա���ԣ��Ǳ���������������
class Son : public Base {
public:
	int d;
};

//TODO ���ÿ�����Ա������ʾ�����߲鿴����ģ�;�����:
//TODO cl /d1 reportSingleClassLayout���� �����ڵ�cpp�ļ� ----> cl /d1 reportSingleClassLayoutSon �̳��еĶ���ģ��.cpp
//TODO cl /d1 reportSingleClassLayout���� �����ڵ�cpp�ļ� ----> cl /d1 reportSingleClassLayoutSon �̳��еĶ���ģ��.cpp
//TODO cl /d1 reportSingleClassLayout���� �����ڵ�cpp�ļ� ----> cl /d1 reportSingleClassLayoutSon �̳��еĶ���ģ��.cpp
int main() {
	cout << "size of Son = " << sizeof(Son) << endl;
	return 0;
}

#endif // EXTEND_OBJ_MODEL