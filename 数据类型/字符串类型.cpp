#include "starter.h"


#ifdef STRING_TYPE

class Person {
public:
    char name[64];
    int age;
};


void test01() {
    //TODO c风格字符串 char 变量名[] = "字符串值";
    char name[] = "lyle";
    cout << name << endl;
    cout << sizeof(name) << endl;// 4个字符+1个空终止符


    //TODO c++ 风格字符串 string 变量名 = "字符串值";
    string motto = "just do it";
    cout << motto << endl;
    cout << sizeof(motto) << endl; //string类对象本身的大小
    cout << motto.size() << endl;
    cout << motto.length() << endl;
}

void test02() {
    Person p;
    p.age = 10;


    //在编译阶段，编译器会把"god"的内容('g','o','d','\0')复制到数组的前4个字节
    char name[64] = "god";//合法的初始化语句
    cout << "name:       " << (void*)name << endl;      // 数组首元素地址
    cout << "&name[0]:   " << (void*)&name[0] << endl;  // 第一个字符地址
    cout << "&name:      " << (void*)&name << endl;     // 整个数组的地址

    // 在c/c++语言中，数组不是可赋值类型(non-assignable type)
    //p.name = "god";//非法赋值语句

    cout << p.name << " " << p.age << endl;
}

int main() {
    //test01();
    test02();
    return 0;
}
#endif // STRING_TYPE
