#include "starter.h"
#include <time.h>

#ifdef C_TIME

int main() {

	//�βΣ���ʾ��ȡ�ĵ�ǰʱ���Ƿ���Ҫ�������ط����д洢
	//����ֵ�� long long
	long long res = time(NULL);
	//��1970��1��1�� 0:0:0 ��ʼ����xxxx��
	printf("%lld\n", res);

	return 0;
}
#endif // C_TIME