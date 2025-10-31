#include "starter.h"

#ifdef C_STRUCT_ALIAS

/*

定义格式:

typedef struct 可以省略的大名
{
	成员1;
	成员2;

} 别名;
*/

typedef struct Ultraman
{
	char name[100];
	int attack;
	int defense;
	int blood;
} M;


int main() {
	//TODO typedef的类型可以不写struct，如果没有typedef则必须写struct
	M a = { "张三", 100, 90, 300 };
	M b = { "李四", 541, 78, 654 };
	M c = { "王五", 201, 99, 520 };

	M arr[3] = { a,b,c };

	for (int i = 0; i < 3; i++)
	{
		M t = arr[i];
		printf("%s %d %d %d\n", t.name, t.attack, t.defense, t.blood);
	}
	return 0;
}
#endif // C_STRUCT_ALIAS