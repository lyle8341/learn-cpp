#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>


int main() {

	char* a[] = { "abc", "def", "hij" };

	char** p = a;


	printf("%c\n", *(*(p + 2) + 1));
	printf("%c\n", a[2][1]);
	printf("%c\n", p[2][1]);


	return 0;
}