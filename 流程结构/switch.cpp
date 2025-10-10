#include <iostream>
#include "starter.h"

using namespace std;


#ifdef SWITCH_TEST

int main() {

	cout << "请给电影打分" << endl;
	int score = 0;
	cin >> score;
	cout << "您打的分数为: " << score << endl;

	switch (score) // 只能是 整形 或者 字符型
	{
	default:
		cout << "您没有意见" << endl;
		break;
	case 10:
		cout << "您认为是经典电影" << endl;
		break;
	case 9:
		cout << "您认为是不错的电影" << endl;
		break;
	}

	return 0;
}
#endif // SWITCH_TEST
