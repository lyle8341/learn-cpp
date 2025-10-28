#include "starter.h"


#ifdef C_DECIMAL
int main() {

	//精确度小数点后6位
	float a = 3.141592653F;
	printf("%f\n", a);
	printf("%.2f\n", a);

	//
	double b = 1.7854861578971213032659464666;
	printf("%lf\n", b);
	printf("%.2lf\n", b);


	//long double
	long double c = 3.141592653L;
	printf("%lf\n", c);
	printf("%.2lf\n", c);

	// %zu：专门用于格式化输出 size_t 类型  使用场景：sizeof、strlen、malloc 等函数的返回值
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(long double));

	return 0;
}
#endif // C_DECIMAL