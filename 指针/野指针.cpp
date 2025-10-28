#include "starter.h"


#ifdef DANGLING_POINTER

//野指针： 被声明但未初始化(赋值)

int main() {
	//指针变量p指向内存地址编号为0x1100的空间
	int* p = (int*)0x1100;

	//访问野指针报错
	cout << *p << endl;



	int* dp; //dp是野指针因为未被赋值
	*dp = 20; //TODO 将20赋予指针dp所指向的空间，"向未知的、随机的4字节内存区域，修改存储值为20


	//避免野指针
	int* x = NULL;
	int* y = nullptr;



	return 0;
}


#endif // DANGLING_POINTER
