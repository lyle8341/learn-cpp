#include "starter.h"

#ifdef C_STRING_FUNCTION

int main() {
	char* str1 = "abc";
	char str2[100] = "abc";
	char str3[5] = { 'a','b','c','d','\0' };

	printf("------------- strlen(����) -------------\n");
	//strlen �ǲ����������ǵ�
	//Ĭ������£�һ������ռ�����ֽ�
	/*printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	printf("%d\n", strlen(str3));*/

	printf("------------- strcat(ƴ��) -------------\n");
	//�ѵڶ������������ݿ�������һ��������ĩβ
	//ǰ��1����һ���ַ����ǿ��Ա��޸ĵ�
	//ǰ��2����һ���ַ�����ʣ��ռ��������ƴ�ӵ��ַ���
	//strcat(str2, str3);
	//printf("%s\n", str2);//abcabcd
	//printf("%s\n", str3);//abcd

	printf("------------- strcpy(����) -------------\n");
	//�Ѳ����������ݿ���������һ������ԭ����
	//ǰ��1����һ���ַ����ǿ��Ա��޸ĵ�
	//ǰ��2����һ���ַ����Ŀռ�������ɵڶ����ַ���������
	//strcpy(str2, str3);
	//printf("%s\n", str2);//abcd
	//printf("%s\n", str3);//abcd

	printf("------------- strcmp(�Ƚ�) -------------\n");
	//˳�������һ������һ��
	/*int res = strcmp(str1, str2);
	printf("%d\n", res);*/

	printf("------------- strlwr(Сд) -------------\n");
	/*_strlwr(str2);
	printf("%s\n", str2);*/

	printf("------------- strupr(��д) -------------\n");
	//_strupr(str2);
	//printf("%s\n", str2);

	return 0;
}

#endif // C_STRING_FUNCTION