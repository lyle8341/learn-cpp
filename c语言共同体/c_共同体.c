#include "starter.h"

#ifdef C_UNION_DEFINE


//TODO 一种数据可能有多种类型
	//比如金融项目中的 “钱”，可能是整数、小数、字符串
	//比如考生成绩，可能是整数、小数、ABC等级式


union MoneyType {
	int moneyi;
	double moneyd;
	char moneyStr[100];
};

int main() {
	//1.定义共同体变量
	union MoneyType money;

	//2.赋值
	//整数赋给 moneyi, 小数赋给moneyd, 字符串赋给moneyStr
	//而且每次只能赋一个值
	money.moneyi = 999;

	//3.输出
	//赋给那个类型，就从那个类型取出来
	printf("%d\n", money.moneyi);



	return 0;
}

#endif // C_UNION_DEFINE