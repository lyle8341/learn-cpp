#include "starter.h"

#ifdef FLOAT_DOUBLE

int main() {

	//������ float
	//˫���� double
	//Ĭ������£����һ��С���������ʾ6λ��Ч����

	float f_pi = 3.141592653f;
	cout << "f_pi = " << f_pi << endl;

	double pi = 3.141592653;
	cout << "pi = " << pi << endl;


	//��ѧ������
	float distance = 3e2; // 3 * 10^2
	cout << "distance = " << distance << endl;

	float distance2 = 3e-2; // 3 * 10^-2
	cout << "distance2 = " << distance2 << endl;
}

#endif // FLOAT_DOUBLE
