#include "starter.h"

#ifdef FLOAT_DOUBLE

int main() {

	//TODO 实型数据没有signed和unsigned，默认全部由符号
	//单精度 float 只提供了前7位的准确输出
	//双精度 double 15~16位有效
	//默认情况下：输出一个小数，最多显示6位有效数字

	float f_pi = 3.141592653f;
	cout << "f_pi = " << f_pi << endl;

	double pi = 3.141592653;
	cout << "pi = " << pi << endl;

	long double	ld = 22.32;

	//默认大数据以科学记数法显示
	cout << fixed; //设置为小数显示
	cout.width(20);//设置显示宽度

	//科学计数法
	float distance = 3e2; // 3 * 10^2
	cout << "distance = " << distance << endl;

	float distance2 = 3e-2; // 3 * 10^-2
	cout << "distance2 = " << distance2 << endl;

}

#endif // FLOAT_DOUBLE
