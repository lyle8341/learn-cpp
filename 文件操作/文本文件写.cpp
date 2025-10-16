#include "starter.h"

#ifdef TEXT_WRITE


void test01() {
	//包含 fstream
	//1.创建流对象
	ofstream ofs;

	//2.指定打开方式
	ofs.open("text.txt", ios::out);//项目根目录下

	//3.写内容
	ofs << "姓名: 张三" << endl;
	ofs << "年龄：20" << endl;
	ofs << "性别: 男" << endl;

	//4.关闭文件
	ofs.close();
}


int main() {
	test01();
	return 0;
}
#endif // TEXT_WRITE
