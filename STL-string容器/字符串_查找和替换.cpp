#include "starter.h"


#ifdef STRING_FIND_REPLACE

void strFind() {
	string str1 = "abcdefg";
	int idx = str1.find("de");//�������Ҳ���
	str1.rfind("de");//�����������

	if (-1 == idx) {//TODO δ�ҵ�
		cout << "δ�ҵ�" << endl;
	}
	else {
		cout << idx << endl;
	}

}

void strReplace() {
	string str1 = "abcdefg";
	//��1��λ���� 3���ַ� �滻Ϊ XXXXXX
	str1.replace(1, 3, "XXXXXX");
	cout << str1 << endl;

}

int main() {
	strFind();
	strReplace();
	return 0;
}

#endif // STRING_FIND_REPLACE
