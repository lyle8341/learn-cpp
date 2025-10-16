#include "starter.h"
#include "../±ê×¼Ä£°å¿â(STL)/lyleRandom.h"

#ifdef VECTOR_INSERT_DELETE

int main() {

	lyle_initRandom();

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(lyle_generateRandom());
	}
	printVector(v);

	v.pop_back();//Î²É¾
	printVector(v);

	//²åÈë
	v.insert(v.begin(), 99);
	printVector(v);

	v.insert(v.begin(), 2, 999);
	printVector(v);
	//É¾³ý
	v.erase(v.begin());
	printVector(v);
	
	//Çå¿Õvector
	//v.erase(v.begin(), v.end());
	v.clear();
	printVector(v);


	return 0;
}
#endif // VECTOR_INSERT_DELETE