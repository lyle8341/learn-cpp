#include "starter.h"
#include "../��׼ģ���(STL)/lyleRandom.h"

#ifdef VECTOR_SWAP

int main() {

	lyle_initRandom();

	vector<int> a;
	for (int i = 0; i < 5; i++)
	{
		a.push_back(lyle_generateRandom() * -1);
	}
	printVector(a);

	vector<int> b;
	for (int i = 0; i < 10; i++)
	{
		b.push_back(lyle_generateRandom());
	}
	printVector(b);

	//����
	a.swap(b);

	printVector(a);
	printVector(b);


	//TODO ��;
	vector<int> hugeV;
	hugeV.assign(10000, 1);
	hugeV.resize(3);//����ָ����С
	cout << "hugeV����: " << hugeV.capacity() << endl;
	cout << "hugeV��С: " << hugeV.size() << endl;
	
	//TODO �����ڴ�ԭ�����£�
	vector<int> temp(hugeV);
	printVector(temp);
	cout << "temp����: " << temp.capacity() << endl;		//�������3
	cout << "temp��С: " << temp.size() << endl;        //��С���3



	// vector<int>(hugeV) ��������
	vector<int>(hugeV).swap(hugeV);

	cout << "����������: " << hugeV.capacity() << endl;
	cout << "�������С: " << hugeV.size() << endl;

	return 0;
}



#endif // VECTOR_SWAP
