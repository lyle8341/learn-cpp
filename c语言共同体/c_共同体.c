#include "starter.h"

#ifdef C_UNION_DEFINE


//TODO һ�����ݿ����ж�������
	//���������Ŀ�е� ��Ǯ����������������С�����ַ���
	//���翼���ɼ���������������С����ABC�ȼ�ʽ


union MoneyType {
	int moneyi;
	double moneyd;
	char moneyStr[100];
};

int main() {
	//1.���干ͬ�����
	union MoneyType money;

	//2.��ֵ
	//�������� moneyi, С������moneyd, �ַ�������moneyStr
	//����ÿ��ֻ�ܸ�һ��ֵ
	money.moneyi = 999;

	//3.���
	//�����Ǹ����ͣ��ʹ��Ǹ�����ȡ����
	printf("%d\n", money.moneyi);



	return 0;
}

#endif // C_UNION_DEFINE