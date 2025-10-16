#include "starter.h"
#include "../��׼ģ���(STL)/lyleRandom.h"

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

		cout << "����: " << v.capacity() << endl;
		cout << "��С: " << v.size() << endl;
	}

	//TODO ����ָ����С
	//v.resize(20); �� 0 ���
	v.resize(15, 110);
	printVector(v);

	v.resize(5); //���ಿ�ֻ�ɾ��
	printVector(v);


	return 0;
}

#endif // VECTOR_CAPACITY_SIZE
