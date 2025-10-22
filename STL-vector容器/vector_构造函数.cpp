#include "starter.h"
#include "../标准模板库(STL)/lyleRandom.h"


#ifdef VECTOR_CONSTRUCT

//TODO 动态扩展，将原数据拷贝到新空间，释放原空间


int main() {
	lyle_initRandom();

	vector<int> v1;//TODO 默认构造
	for (int i =0;i< 10;i++)
	{
		v1.push_back(lyle_generateRandom());
	}
	printVector(v1);

	//TODO 通过区间构造
	vector<int> v2(v1.begin(), v1.end());//参数: 迭代器
	printVector(v2);

	//TODO n个element方式构造
	int count = 8;
	int value = 110;
	vector<int> v3(count, value);
	printVector(v3);

	//TODO 拷贝构造
	vector<int> v4(v3);
	printVector(v4);

	return 0;
}

#endif // VECTOR_CONSTRUCT