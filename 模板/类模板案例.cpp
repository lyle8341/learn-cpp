#include "MyArray.hpp"

#ifdef CLASS_TEMPLATE_SAMPLE

void test01() {
	MyArray<int> arr(5);
	MyArray<int> arr2(arr);
	MyArray<int> arr3(100);

	arr3 = arr;

}

template <typename T>
//TODO printArray参数不能加const，常对象只能调用常函数，MyArray中的函数是普通函数
void printArray(MyArray<T>& arr) {//
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void test02() {
	MyArray<int> arr(5);
	for (int i = 0; i < arr.getCapacity(); i++)
	{
		arr.tailInsert(i);
	}
	printArray(arr);

	arr.tailDelete();

	cout << "capacity: " << arr.getCapacity() << endl;
	cout << "size: " << arr.getSize() << endl;
}


class Person {
public:
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	Person() {}

	string name;
	int age;


};

//TODO 具体化
template<> void printArray(MyArray<Person>& arr) {//
	for (int i = 0; i < arr.getSize(); i++)
	{
		Person temp = arr[i];
		cout << "姓名: " << temp.name << " 年龄: " << temp.age << endl;
	}
}

void test03() {
	MyArray<Person> arr(10);
	Person p1("齐天大圣", 600);
	Person p2("卷帘大将", 200);
	Person p3("金蝉子", 30);
	arr.tailInsert(p1);
	arr.tailInsert(p2);
	arr.tailInsert(p3);
	printArray(arr);
	cout << "capacity: " << arr.getCapacity() << endl;
	cout << "size: " << arr.getSize() << endl;
}

int main() {
	//test01();
	//test02();
	test03();
	return 0;
}
#endif // CLASS_TEMPLATE_SAMPLE