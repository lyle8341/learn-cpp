#include "person.cpp"


#ifdef CLASS_TEMPLATE_SPLIT_MULTIL_FILE_1

//TODO 类文件分文件编写
	//1. person.h
	//2. person.cpp
	//3. 类模板分文件编写.cpp

int main() {
	Person<string, int> p("lyle", 30);
	cout << "类模板分文件编写1.cpp" << endl;
	p.showPerson();
	return 0;
}

#endif // CLASS_TEMPLATE_SPLIT_MULTIL_FILE_1