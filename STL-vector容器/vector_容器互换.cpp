#include "starter.h"
#include "../标准模板库(STL)/lyleRandom.h"

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

	//交换
	a.swap(b);

	printVector(a);
	printVector(b);


	//TODO 用途
	vector<int> hugeV;
	hugeV.assign(10000, 1);
	hugeV.resize(3);//重新指定大小
	cout << "hugeV容量: " << hugeV.capacity() << endl;
	cout << "hugeV大小: " << hugeV.size() << endl;
	
	//TODO 收缩内存原理如下：
	vector<int> temp(hugeV);
	printVector(temp);
	cout << "temp容量: " << temp.capacity() << endl;		//容量变成3
	cout << "temp大小: " << temp.size() << endl;        //大小变成3



	// vector<int>(hugeV) 匿名对象
	vector<int>(hugeV).swap(hugeV);

	cout << "交换后容量: " << hugeV.capacity() << endl;
	cout << "交换后大小: " << hugeV.size() << endl;

	return 0;
}



#endif // VECTOR_SWAP
