#include "starter.h"


#ifdef C_DECIMAL
int main() {

	//��ȷ��С�����6λ
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

	// %zu��ר�����ڸ�ʽ����� size_t ����  ʹ�ó�����sizeof��strlen��malloc �Ⱥ����ķ���ֵ
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	printf("%zu\n", sizeof(long double));

	return 0;
}
#endif // C_DECIMAL