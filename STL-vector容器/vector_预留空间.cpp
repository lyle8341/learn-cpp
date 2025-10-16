#include "starter.h"

#ifdef VECTOR_RESERVE

int main() {
	//TODO 减少vector在动态扩展容量时的扩展次数

	//reserve(int len); 容器预留len个元素长度，预留位置不初始化，元素不可访问

	vector<int> v;


	//利用 reserve 预留空间，可以减少扩容次数
	v.reserve(100000);


	int expand_times = 0;//统计开辟内存次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0]) {
			p = &v[0];
			expand_times++;
		}

	}
	cout << "开辟内存次数: " << expand_times << endl;

	return 0;
}

#endif // VECTOR_RESERVE