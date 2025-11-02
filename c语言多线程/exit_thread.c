#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

// 如果想让线程退出，但是不会导致虚拟地址空间释放（针对线程）
// 参数：retval线程退出的时候携带的数据，当前子线程的主线程会得到该数据
// 只要调用该函数，当前线程马上退出，并且不会影响到其他线程的正常运行

void* callback(void* arg){
    for(int i = 0; i < 5; i++){
        printf("子线程: i = %d\n", i);
    }
    printf("子线程: %ld\n", pthread_self());
    return NULL;
}
// gcc exit_thread.c -lpthread -o app
int main(){
    pthread_t tid;
    pthread_create(&tid, NULL, callback, NULL);
    printf("主线程: %ld\n", pthread_self());
    //void pthread_exit(void* retval);
	pthread_exit(NULL);
	return 0;
}

