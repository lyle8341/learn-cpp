#include "starter.h"


#ifdef POINTER_AND_ARRAY

int main() {
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };

	int* p = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << *p++ << endl;
	}
	return 0;
}
#endif // POINTER_AND_ARRAY