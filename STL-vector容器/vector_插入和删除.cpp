#include "starter.h"
#include "../��׼ģ���(STL)/lyleRandom.h"

#ifdef VECTOR_INSERT_DELETE

int main() {

	lyle_initRandom();

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	printVector(v);

	v.pop_back();//βɾ
	printVector(v);

	//����
	v.insert(v.begin(), 99);
	printVector(v);

	v.insert(v.begin(), 2, 999);
	printVector(v);
	//ɾ��
	v.erase(v.begin());
	printVector(v);
	
	//���vector
	//v.erase(v.begin(), v.end());
	v.clear();
	printVector(v);


	return 0;
}
#endif // VECTOR_INSERT_DELETE