#include "starter.h"
#include "../标准模板库(STL)/lyleRandom.h"

#ifdef TRAVERSE_ALGORITHM


void ordinary_function_print(int var) {
	cout << var << " ";
}

struct functor_print
{
	void operator()(int var) {
		cout << var << " ";
	}
};

//TODO for_each
void test_for_each() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	for_each(v.begin(), v.end(), ordinary_function_print);//普通函数名
	cout << endl;
	for_each(v.begin(), v.end(), functor_print());//仿函数对象
}

struct MyTransform
{
	int operator()(int e) {
		return e;
	}
};


void test_transform() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}

	vector<int> v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), MyTransform());

	for_each(v2.begin(), v2.end(), functor_print());
}


int main() {
	lyle_initRandom();
	//test_for_each();
	test_transform();


	return 0;
}
#endif // TRAVERSE_ALGORITHM
