#include "starter.h"

#ifdef TEXT_READ


void first_read_way(ifstream& ifs) {
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;;
	}
}

void second_read_way(ifstream& ifs) {
	char buff[1024] = { 0 };
	while (ifs.getline(buff, sizeof(buff)))
	{
		cout << buff << endl;
	}
}

void third_read_way(ifstream& ifs) {
	string buff;
	while (getline(ifs, buff))
	{
		cout << buff << endl;
	}
}

void fourth_read_way(ifstream& ifs) {
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
}

void test01() {
	//包含 fstream
	//1.创建流对象
	ifstream ifs;

	//2.打开文件，并判断是否打开成功
	ifs.open("text.txt", ios::in);//项目根目录下

	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	//3.读数据（四种方式）
	//方式一
	first_read_way(ifs);
	//方式二
	//second_read_way(ifs);
	//方式三
	//third_read_way(ifs);
	//方式四
	//fourth_read_way(ifs);


	//4.关闭文件
	ifs.close();
}


int main() {
	test01();
	return 0;
}

#endif // TEXT_READ
