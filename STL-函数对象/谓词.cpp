#include "starter.h"

#include <vector>
#include <algorithm>

#ifdef FUNCTION_OBJ_PREDICATE

//TODO 返回bool类型的仿函数称为 "谓词"
//TODO operator 接受一个参数---> 一元谓词
//TODO operator 接受二个参数---> 二元谓词


//一元谓词
struct GreaterFive
{
	bool operator()(int var) {
		return var > 780;
	}
};

void test01() {
	vector<int> v;
	v.push_back(85);
	v.push_back(23);
	v.push_back(45);
	v.push_back(20);
	v.push_back(12);
	v.push_back(785);
	v.push_back(65);
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());//匿名函数对象
	if (it != v.end()) {
		//找到了,返回满足条件的元素的 pos
		cout << "找到了: " << *it << endl;
	}
}


//二元谓词
struct MySort
{
	bool operator()(int a, int b) {
		return a > b;
	}
};
void test02() {
	vector<int> v;
	v.push_back(85);
	v.push_back(23);
	v.push_back(45);
	v.push_back(20);
	v.push_back(12);
	v.push_back(785);
	v.push_back(65);

	sort(v.begin(), v.end(), MySort());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

















int main() {
	test01();
	test02();
	return 0;
}
#endif // FUNCTION_OBJ_PREDICATE
