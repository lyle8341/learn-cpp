#include "starter.h"

#ifdef C_STRUCT_ALIAS

/*

�����ʽ:

typedef struct ����ʡ�ԵĴ���
{
	��Ա1;
	��Ա2;

} ����;
*/

typedef struct Ultraman
{
	char name[100];
	int attack;
	int defense;
	int blood;
} M;


int main() {
	//TODO typedef�����Ϳ��Բ�дstruct�����û��typedef�����дstruct
	M a = { "����", 100, 90, 300 };
	M b = { "����", 541, 78, 654 };
	M c = { "����", 201, 99, 520 };

	M arr[3] = { a,b,c };

	for (int i = 0; i < 3; i++)
	{
		M t = arr[i];
		printf("%s %d %d %d\n", t.name, t.attack, t.defense, t.blood);
	}
	return 0;
}
#endif // C_STRUCT_ALIAS