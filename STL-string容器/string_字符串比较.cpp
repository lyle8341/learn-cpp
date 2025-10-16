#include "starter.h"


#ifdef STRING_COMPARE

int main() {

	string a = "hello";
	string b = "hello";
	if (a.compare(b) == 0) {
		cout << "a = b" << endl;
	}

	return 0;

}



#endif // STRING_COMPARE
