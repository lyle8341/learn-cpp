#include "starter.h"


#ifdef VECTOR_INTERNAL_TYPE


void myPrint(int val) {
	cout << val << endl;
}


void test01() {
	vector<int>	 v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//迭代器访问
	vector<int>::iterator itBegin = v.begin();//指向容器中第一个元素
	vector<int>::iterator itEnd = v.end();    //指向最后一个元素的下一个位置

	//第一种遍历
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//第二种遍历
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//第三种遍历 利用STL提供的遍历算法
	for_each(v.begin(), v.end(), myPrint);
}




int main() {
	test01();
	return 0;
}
#endif // VECTOR_INTERNAL_TYPE
