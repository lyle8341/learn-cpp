#include "starter.h"


#ifdef PURE_VIRTUAL_FUNCTION_ABSTRACT

//���麯���﷨:  virtual ����ֵ���� ������ (�����б�) = 0;

//���������˴��麯���������Ҳ��Ϊ ������

//�������ص�
	//1.�޷�ʵ��������
	//2.���������д�������еĴ��麯��������Ҳ���ڳ�����

class Base {
public:
	//���麯��
	//ֻҪ��һ�����麯����������Ϊ������
	virtual void func() = 0;
};

class Son :public Base {

	//�������ʵ�֣������޷�ʵ����
	virtual void func() {

	}
};



int main() {

	Son s;
	return 0;
}

#endif // PURE_VIRTUAL_FUNCTION_ABSTRACT
