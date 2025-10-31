#include "starter.h"

#ifdef C_NO_END_LOOP
int main() {

	for (;;)
	{
		//
		printf("for(;;)");
	}

	while (1) //∑«0±Ì ætrue
	{
		//
		printf("while(1)");
	}

	do
	{
		//
		printf("do while(1)");
	} while (1);

	return 0;
}

#endif // C_NO_END_LOOP