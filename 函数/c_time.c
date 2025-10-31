#include "starter.h"
#include <time.h>

#ifdef C_TIME

int main() {

	//形参：表示获取的当前时间是否需要在其他地方进行存储
	//返回值： long long
	long long res = time(NULL);
	//从1970年1月1日 0:0:0 开始过了xxxx秒
	printf("%lld\n", res);

	return 0;
}
#endif // C_TIME