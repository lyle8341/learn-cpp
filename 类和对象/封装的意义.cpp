#include <iostream>
#include "starter.h"

using namespace std;

#ifdef CLASS_ENCAPSULATION

const double PI = 3.14;

class Circle {

	//访问权限
public:
	//属性
	int r;

	//行为
	double circumference() {
		return 2 * PI * r;
	}
};


int main() {
	//创建具体的圆对象
	Circle c1;
	//对象属性赋值
	c1.r = 5;

	cout << "圆的周长 = " << c1.circumference() << endl;

	return 0;
}


#endif // CLASS_ENCAPSULATION