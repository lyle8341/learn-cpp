#include <iostream>
#include "starter.h"
#include <ctime>

using namespace std;


#ifdef GUESS_NUM

int main() {
	//������������
	srand((unsigned int)time(NULL));

	//����0+1 ~ 99+1�����
	int num = rand() % 100 + 1;
	//cout << num << endl;

	int val = 0;
	cout << "������²������: " << endl;

	int stat_count = 0;

	//�ж���ҵĲ²�
	while (true)
	{
		stat_count++;
		cin >> val;
		if (val < num) {
			cout << "ƫС�����ز�" << endl;
		}
		else if (val > num) {
			cout << "ƫ�����ز�" << endl;
		}
		else {
			cout << "�²���ȷ" << endl;
			cout << "���Ʋ²����: " << stat_count << endl;
			break;
		}
	}

	return 0;
}
#endif // GUESS_NUM
