#include "starter.h"



#ifdef FIND_ALGORITHM


void test_find() {
	vector<int> v;

	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos != v.end()) {
		//找到了
	}
	//TODO 自定义类型需要重载 ==
}

void test_find_if() {

	//find_if(iterator beg, iterator end, _Pred)

	//查找相邻重复
	//adjacent_find(iterator beg, iterator end)

	//TODO 无序序列不可用
	//bool binary_search(iterator beg, iterator end, value);

	//TODO 自定义对象需要重载 ==
	//int count(iterator beg, iterator end, value)
	//count_if(iterator beg, iterator end, _Pred)


}











int main() {
	test_find();

	test_find_if();

	return 0;
}
#endif // FIND_ALGORITHM
