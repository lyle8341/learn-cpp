#include "starter.h"

#ifdef C_UNION_CHARACTERISTIC

union MoneyType {
	int moneyi;
	double moneyd;
	char moneyStr[100];
};

int main() {
	union MoneyType money;

	//TODO ���еı�����ʹ��ͬһ���ڴ�ռ�
	printf("%p\n", &(money.moneyi));
	printf("%p\n", &(money.moneyd));
	printf("%p\n", &(money.moneyStr));


	printf("%zu\n", sizeof(money.moneyi));
	printf("%zu\n", sizeof(money.moneyd));
	printf("%zu\n", sizeof(money.moneyStr));

	//TODO ��ռ���ڴ��С = ����Ա�ĳ��ȣ�Ҳ���ڴ����Ӱ�죩
	printf("%zu\n", sizeof(money));

	//TODO ÿ��ֻ�ܸ�һ��������ֵ����Ϊ�ڶ��θ�ֵ�Ḳ��ԭ������
	money.moneyi = 23;
	money.moneyd = 3.14;
	printf("%lf\n", money.moneyd);

	return 0;
}
#endif // C_UNION_CHARACTERISTIC