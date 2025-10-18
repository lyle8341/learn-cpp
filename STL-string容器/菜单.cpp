#include "starter.h"

#ifdef STRING_MENU

void printContext(ostream& out, string content, string& side) {
	content.insert(0, side);
	content.append(side);
	out << content << endl;
}

int main() {
	//首行
	string sideline = string(50, '*');
	cout << sideline << endl;

	//公共边线
	string side = string(15, '*');

	//自定义内容
	printContext(cout, "  欢迎参加演讲比赛  ", side);
	printContext(cout, "   1.开始演讲比赛   ", side);
	printContext(cout, "   2.查看往届记录   ", side);

	//结尾行
	cout << sideline << endl;
	return 0;
}
#endif // STRING_MENU