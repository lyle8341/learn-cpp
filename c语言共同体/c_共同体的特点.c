#include "starter.h"

#ifdef C_UNION_CHARACTERISTIC

union MoneyType {
	int moneyi;
	double moneyd;
	char moneyStr[100];
};

int main() {
	union MoneyType money;

	//TODO 所有的变量都使用同一个内存空间
	printf("%p\n", &(money.moneyi));
	printf("%p\n", &(money.moneyd));
	printf("%p\n", &(money.moneyStr));


	printf("%zu\n", sizeof(money.moneyi));
	printf("%zu\n", sizeof(money.moneyd));
	printf("%zu\n", sizeof(money.moneyStr));

	//TODO 所占的内存大小 = 最大成员的长度（也受内存对齐影响）
	printf("%zu\n", sizeof(money));

	//TODO 每次只能给一个变量赋值，因为第二次赋值会覆盖原有数据
	money.moneyi = 23;
	money.moneyd = 3.14;
	printf("%lf\n", money.moneyd);

	return 0;
}
#endif // C_UNION_CHARACTERISTIC