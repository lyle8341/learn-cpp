#include "starter.h"
#include "../��׼ģ���(STL)/lyleRandom.h"


#ifdef VECTOR_ASSIGN


int main() {
	lyle_initRandom();
	vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(lyle_generateRandom());
	}
	printVector(v1);

	//TODO ��ֵ
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//TODO assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//TODO  n��elem ��ʽ��ֵ
	vector<int> v4;
	v4.assign(4, 100);
	printVector(v4);

	return 0;
}



#endif // VECTOR_ASSIGN
