#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
// pthread_t pthread_self(void);//返回当前线程的线程ID
// libpthread.so libpthread.a
// 每一个线程都有一个唯一ID，类型为 pthread_t ，无符号长整形数
// thread: 	 传出参数，无符号长整形，线程创建成功，会将线程ID写入到这个指针指向的内存
// attr:         线程的属性，一般情况下使用默认属性即可，写NULL
// start_routine:函数指针，创建出的子线程的处理动作，也就是该函数在子线程中执行
// arg: 	 作为实参传递到start_routine指针指向的函数内部
void* callback(void* arg){
	for(int i = 0; i < 5; i++){
		printf("子线程: i = %d\n", i);
	}	
	printf("子线程: %ld\n", pthread_self());
	return NULL;
}
// gcc creat_thread.c -lpthread -o app
int main(){
	pthread_t tid;
    //int pthread_create(pthread_t* thread, const pthread_attr_t* attr, void*(*start_routine)(void*), void* arg);
	pthread_create(&tid, NULL, callback, NULL);
	for(int i = 0; i < 5; i++){
       	printf("主线程: i = %d\n", i);

    }
    printf("主线程: %ld\n", pthread_self());
	sleep(3);
	return 0;
}
