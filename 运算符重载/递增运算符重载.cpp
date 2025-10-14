#include "starter.h"


#ifdef PLUS_PLUS_OVERRIDE

class MyInteger {

	friend ostream& operator<<(ostream& out, MyInteger mi);


public:
	MyInteger() {
		this->num = 0;
	}


	//����ǰ��++
	//�������++���صĲ������ã���ÿ���Ƕ��¶��������ԭ����û��ͬ���ı�
	//++(++(++(++(++mi))))
	MyInteger& operator++() {
		num++;
		return *this;
	}


	//���ú���++
	//int����ռλ������������ǰ�úͺ��ã���Project(����)�к���ռλ��.cpp
	MyInteger operator++(int) {
		MyInteger temp = *this;//temp�Ǿֲ�����
		num++;
		return temp;
	}

private:
	int num;
};


ostream& operator<<(ostream& out, MyInteger mi) {
	out << mi.num << endl;
	return out;
}


void test01() {
	MyInteger mi;
	cout << ++mi << endl;		//1
	cout << ++(++mi) << endl;	//3
	cout << mi << endl;			//3
}


void test02() {
	MyInteger mi;
	cout << mi++ << endl;
	cout << mi << endl;
}


int main() {
	//test01();
	test02();
	return 0;
}
#endif // PLUS_PLUS_OVERRIDE
