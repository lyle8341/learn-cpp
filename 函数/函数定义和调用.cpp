#include "starter.h"


#ifdef FUNCTION_DEF_INVOKE

int add(int a, int b) {
	return a + b;
}

int main() {
	int x = 12;
	int y = 28;
	int result = add(x, y);
	cout << result << endl;
	return 0;
}
#endif // FUNCTION_DEF
