#include <stdio.h>


int main() {

	int a = 23;
	long b = 2233444L;
	float c = 3.14F;
	double d = 344.43;
	long long e = 3444;

	printf("%zu\n", sizeof(int));//4
	printf("%zu\n", sizeof(double));//8
	printf("%zu\n", sizeof(long long));//8



	printf("%llu\n", (long long)(&a));
	printf("%llu\n", (long long)(&d));
	printf("%llu\n", (long long)(&e));


	return 0;
}