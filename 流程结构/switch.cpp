#include <iostream>
#include "starter.h"

using namespace std;


#ifdef SWITCH_TEST

int main() {

	cout << "�����Ӱ���" << endl;
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ: " << score << endl;

	switch (score) // ֻ���� ���� ���� �ַ���
	{
	default:
		cout << "��û�����" << endl;
		break;
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 9:
		cout << "����Ϊ�ǲ���ĵ�Ӱ" << endl;
		break;
	}

	return 0;
}
#endif // SWITCH_TEST
