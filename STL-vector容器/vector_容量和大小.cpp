#include "starter.h"
#include "../标准模板库(STL)/lyleRandom.h"

#ifdef VECTOR_CAPACITY_SIZE

int main() {

	lyle_initRandom();

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}

	if (!v.empty()) {
		printVector(v);

		cout << "容量: " << v.capacity() << endl;
		cout << "大小: " << v.size() << endl;
	}

	//TODO 重新指定大小
	//v.resize(20); 用 0 填充
	v.resize(15, 110);
	printVector(v);

	v.resize(5); //多余部分会删除
	printVector(v);


	return 0;
}

#endif // VECTOR_CAPACITY_SIZE
