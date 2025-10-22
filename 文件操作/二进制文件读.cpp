#include "starter.h"


#ifdef BINARY_READ

//TODO 函数原型： istream& read(char* buffer, int len);

class Person {
public:
    char name[64];
    int age;

};

void test() {

    //1.创建流对象
    ifstream ifs("person.bin", ios::in | ios::binary);

    //ifs.open("person.bin", ios::out | ios::binary);

    if (!ifs.is_open()) {
        cout << "打开文件失败" << endl;
        return;
    }

    //读文件
    Person p;
    ifs.read((char*)&p, sizeof(Person));

    cout << "姓名: " << p.name << " 年龄: " << p.age << endl;

    //关闭文件
    ifs.close();
}

int main() {
    test();

    return 0;
}




#endif // BINARY_READ
