#include "starter.h"

#ifdef C_STRING_DEFINE

// ==================��ʽһ���ַ�����+˫���ţ� ==================
void arr_double_quotes() {
	char str0[4] = "abc";
	//TODO ��ʽһϸ��:
	// 1.���ʴ洢ͬ "��׼��ʽ"

	// 2.����ĳ��ȣ�Ҫô��д��Ҫд�Ļ��ѽ�����ǵĿռ�Ԥ������
	//char str2[4] = "good"; // û�и��������Ԥ���ռ�
	//printf("%s\n", str2);

	// 3.�ַ������ݿ��Ըı�
	str0[0] = 'X';
	printf("%s\n", str0);
}

// ================== ��ʽ����ָ��+˫���ţ� ==================
void pointer_double_quotes() {
	char* str3 = "nice"; //����ֻ��������������û��nice������в����ٴ�����ֱ�Ӹ���
	//TODO ��ʽ��ϸ��

	// 1.�洢ͬ "��׼��ʽ"

	// 2.��ѵײ���ַ��������ֻ�������������ݲ������޸ģ��ַ������Ը���
	//str3[0] = 'Y'; // Exception thrown: write access violation
	//printf("%s\n", str3);

	char* str4 = "nice";

	printf("str3�ĵ�ַ: %p\n", str3);
	printf("str4�ĵ�ַ: %p\n", str3);
}

//����¼���ַ���
void intput_traverse_str() {
	char str[100];
	//TODO !!!���������ַ�ʽ!!!
	//char* str = NULL;

	printf("��¼��һ���ַ���\n");
	scanf_s("%s", str, (unsigned)sizeof(str));
	printf("���յ����ַ���: %s\n", str);

	char* p = str;
	while (1) {
		char c = *p;
		if (c == '\0') {//�������
			break;
		}
		printf("%c ", c);
		p++;
	}
	printf("\n");




}

int main() {
	//��׼��ʽ
	char str1[4] = { 'a','b','c','\0' };

	arr_double_quotes();
	pointer_double_quotes();
	intput_traverse_str();

	//�洢�����ַ� \0
	//char question[5] = { '1','2','\\','0', '\0' };
	//printf("%s\n", question);
	return 0;
}
#endif // C_STRING_DEFINE