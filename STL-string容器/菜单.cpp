#include "starter.h"

#ifdef STRING_MENU

void printContext(ostream& out, string content, string& side) {
	content.insert(0, side);
	content.append(side);
	out << content << endl;
}

int main() {
	//����
	string sideline = string(50, '*');
	cout << sideline << endl;

	//��������
	string side = string(15, '*');

	//�Զ�������
	printContext(cout, "  ��ӭ�μ��ݽ�����  ", side);
	printContext(cout, "   1.��ʼ�ݽ�����   ", side);
	printContext(cout, "   2.�鿴�����¼   ", side);

	//��β��
	cout << sideline << endl;
	return 0;
}
#endif // STRING_MENU