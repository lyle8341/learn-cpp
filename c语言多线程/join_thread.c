#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

struct Test {
    int num;
    int age;
};

//方式一 定义为全局变量
struct Test t;

void* callback(void* arg){
    for(int i = 0; i< 5; i++){
        printf("子线程: i = %ld\n", i);
    }
    printf("子线程：%ld\n", pthread_self());
    
    t.num = 100;
    t.age = 10;
    pthread_exit(&t);
    return NULL;
}

int main(){
    pthread_t tid;
    pthread_create(&tid, NULL, callback, &t);
    printf("主线程: %ld\n", pthread_self());
    //参数1：回收子线程的ID 参数2：接收子线程数据的指针
    void* ptr;
    //int pthread_join(pthread_t thread, void** retval);
    pthread_join(tid, &ptr);

    struct Test* p = (struct Test*)ptr;
    printf("num: %d, age = %d\n", p->num, p->age);

    return 0;
}
