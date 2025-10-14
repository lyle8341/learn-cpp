#include "starter.h"

#ifdef FLOAT_DOUBLE

int main() {

	//单精度 float
	//双精度 double
	//默认情况下：输出一个小数，最多显示6位有效数字

	float f_pi = 3.141592653f;
	cout << "f_pi = " << f_pi << endl;

	double pi = 3.141592653;
	cout << "pi = " << pi << endl;


	//科学计数法
	float distance = 3e2; // 3 * 10^2
	cout << "distance = " << distance << endl;

	float distance2 = 3e-2; // 3 * 10^-2
	cout << "distance2 = " << distance2 << endl;
}

#endif // FLOAT_DOUBLE
