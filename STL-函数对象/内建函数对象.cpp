#include "starter.h"
#include <vector>
#include "../标准模板库(STL)/lyleRandom.h"

//内建仿函数需要引入
#include <functional>
//算法
#include <algorithm>

#ifdef INTERNAL_FUNCTION_OBJ

void 算术仿函数() {
	//取反
	negate<int> n;
	cout << n(50) << endl;

	plus<int> p;
	cout << p(10, 20) << endl;

	//plus
	//minus
	//multiplies
	//divides
	//modulus
}

void 关系仿函数() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	printVector(v);
	sort(v.begin(), v.end(), greater<int>());
	printVector(v);
	//equal_to
	//not_equal
	//greater_equal
	//less
	//less_equal
}

void 逻辑仿函数() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	printVector(v);

	vector<bool> v2;
	v2.resize(v.size());//TODO 必须有!!!

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	printVector(v2);
}

int main() {
	lyle_initRandom();
	//算术仿函数();
	//关系仿函数();
	逻辑仿函数();
	return 0;
}
#endif // INTERNAL_FUNCTION_OBJ
