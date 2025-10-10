#include <iostream>
#include "starter.h"
#include <ctime>

using namespace std;


#ifdef GUESS_NUM

int main() {
	//添加随机数种子
	srand((unsigned int)time(NULL));

	//生成0+1 ~ 99+1随机数
	int num = rand() % 100 + 1;
	//cout << num << endl;

	int val = 0;
	cout << "请输入猜测的数字: " << endl;

	int stat_count = 0;

	//判断玩家的猜测
	while (true)
	{
		stat_count++;
		cin >> val;
		if (val < num) {
			cout << "偏小，请重猜" << endl;
		}
		else if (val > num) {
			cout << "偏大，请重猜" << endl;
		}
		else {
			cout << "猜测正确" << endl;
			cout << "共计猜测次数: " << stat_count << endl;
			break;
		}
	}

	return 0;
}
#endif // GUESS_NUM
