#include "person.hpp"


#ifdef CLASS_TEMPLATE_SPLIT_MULTIL_FILE_2

//TODO 类文件分文件编写

	// 将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件（约定俗成类模板）


int main() {
	Person<string, int> p("lyle", 30);
	p.showPerson();
	cout << "类模板分文件编写2.cpp" << endl;
	return 0;
}

#endif // CLASS_TEMPLATE_SPLIT_MULTIL_FILE_2