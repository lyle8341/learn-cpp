#include "starter.h"

#ifdef C_FILE_COPY

int main() {
	FILE* file = NULL;
	errno_t err = fopen_s(&file, "../images/默认构造函数.png", "rb");
	if (err || file == NULL) {
		printf("无法打开文件！\n");
		perror("错误信息");
		return -1;
	}

	FILE* dest = NULL;
	errno_t err2 = fopen_s(&dest, "../images/默认构造函数-copy.png", "wb");
	if (err2 || dest == NULL) {
		printf("无法打开文件！\n");
		perror("错误信息");
		return -1;
	}

	//
	char arr[1024];// TODO 类型很关键，因为fread会丢弃最后不足一个"元素"的字节
	int	n;

	while ((n = fread(arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), file)) != 0) {
		fwrite(arr, sizeof(arr[0]), n, dest);
	}

	fclose(dest);
	fclose(file);

	return 0;
}
#endif // C_FILE_COPY