#include "starter.h"
#include "swap.h"


//函数分文件编写一般有4个步骤
//1.创建后缀名为.h的头文件(swap.h)
//2.创建后缀名为.cpp的源文件(函数分文件编写.cpp)
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义并引入头文件


#ifdef FUNCTION_SPLIT_MULTI_FILE

int main() {
	int x = 34;
	int y = 21;
	swap(x, y);

	return 0;
}

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << "\tb = " << b << endl;
}

#endif // FUNCTION_SPLIT_MULTI_FILE