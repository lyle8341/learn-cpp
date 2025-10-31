#include "starter.h"
#include <stdlib.h>

#ifdef C_RANDOM

// C语言中的随机数是 "伪随机数"，根据 "线程同余方程"公式计算得出的

int main() {
	//TODO C语言中随机数生成原理如下：
	int num0 = 44;//种子（初始值），弊端：种子不变，随机数结果是固定的
	int num1 = (31 * num0 + 13) % 100; //生成随机数


	srand(1);//设置种子（初始值）
	for (int i = 0; i < 10; i++)
	{
		int r = rand(); //获取随机数
		printf("%d\n", r);
	}

	//改进后
	srand(time(NULL));//设置种子（初始值）
	for (int i = 0; i < 10; i++)
	{
		int r = rand(); //获取随机数
		printf("%d\n", r);
	}
	//设置范围 0~32767
	//TODO 任意范围随机数：比如 8~49
	for (int i = 0; i < 10; i++)
	{
		//1.把范围变成包头不包尾 8-50
		//2.尾巴 - 开头 = 50 - 8 = 42
		//3.修改代码
		int r = rand() % 42 + 8; //(0~99)+1
		printf("good %d\n", r);
	}

	return 0;
}
#endif // C_RANDOM