#include "starter.h"
#include "../标准模板库(STL)/lyleRandom.h"

#ifdef VECTOR_INSERT_DELETE

int main() {

	lyle_initRandom();

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	printVector(v);

	v.pop_back();//尾删
	printVector(v);

	//插入
	v.insert(v.begin(), 99);
	printVector(v);

	v.insert(v.begin(), 2, 999);
	printVector(v);
	//删除
	v.erase(v.begin());
	printVector(v);

	//清空vector
	//v.erase(v.begin(), v.end());
	v.clear();
	printVector(v);


	return 0;
}
#endif // VECTOR_INSERT_DELETE