#include <iostream>
#include "starter.h"

using namespace std;

#ifdef CLASS_ENCAPSULATION

const double PI = 3.14;

class Circle {

	//����Ȩ��
public:
	//����
	int r;

	//��Ϊ
	double circumference() {
		return 2 * PI * r;
	}
};


int main() {
	//���������Բ����
	Circle c1;
	//�������Ը�ֵ
	c1.r = 5;

	cout << "Բ���ܳ� = " << c1.circumference() << endl;

	return 0;
}


#endif // CLASS_ENCAPSULATION