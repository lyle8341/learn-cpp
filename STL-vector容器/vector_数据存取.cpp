#include "starter.h"
#include "../标准模板库(STL)/lyleRandom.h"

#ifdef VECTOR_SAVE_GET

int main() {

	lyle_initRandom();

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	//利用[]访问数组中元素
	for (int i = 0;i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	//利用at方式访问元素
	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素: " <<v.front() << endl;
	cout << "最后一个元素: " <<v.back() << endl;

	return 0;
}
#endif // VECTOR_SAVE_GET