#include "starter.h"
#include "../标准模板库(STL)/lyleRandom.h"


#ifdef VECTOR_ASSIGN


int main() {
	lyle_initRandom();
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(lyle_generateRandom());
	}
	printVector(v1);

	//TODO 赋值
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//TODO assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//TODO  n个elem 方式赋值
	vector<int> v4;
	v4.assign(4, 100);
	printVector(v4);

	return 0;
}



#endif // VECTOR_ASSIGN
